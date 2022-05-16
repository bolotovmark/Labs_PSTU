#pragma once

#include <windows.h>
#include <GL/freeglut.h>
#include <math.h>
#include "class_graph.h"

using namespace System::Windows::Forms;

namespace OpenGLForm
{
	public ref class COpenGL : public System::Windows::Forms::NativeWindow
	{
	public:
		COpenGL(System::Windows::Forms::Form^ parentForm, GLsizei iWidth, GLsizei iHeight)
		{
			CreateParams^ cp = gcnew CreateParams;

			// Set the position on the form
			cp->X = 0;
			cp->Y = 0;
			cp->Height = iHeight;
			cp->Width = iWidth;

			// Specify the form as the parent.
			cp->Parent = parentForm->Handle;

			// Create as a child of the specified parent and make OpenGL compliant (no clipping)
			cp->Style = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;

			// Create the actual window
			this->CreateHandle(cp);

			m_hDC = GetDC((HWND)this->Handle.ToPointer());

			if (m_hDC)
			{
				MySetPixelFormat(m_hDC);
				ReSizeGLScene(iWidth, iHeight);
			}

		}


		System::Void Render(System::Void)
		{	
			//glClearColor((1.0 / 255.0) * 91.0, (1.0 / 255.0) * 75.0, 143.0 * (1.0 / 255.0), 1);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			int lineAmount = current->v.size();
			GLfloat twice_pi = 3.14 * 2.0;
			GLfloat x = 0.0, y = 0.0;
			GLfloat r = 1.6;

			for (int i = 0; i < lineAmount; ++i) {
				x = (r * cos((float)i * twice_pi / (float)lineAmount));
				y = (r * sin((float)i * twice_pi / (float)lineAmount));

				auto iter = current->v.begin();
				advance(iter, i);
				node* tr = (*iter);
				tr->pos.x = x;
				tr->pos.y = y;
			}

			for each(node* temp in current->v) {
				
				x = temp->pos.x;
				y = temp->pos.y;
				for each(tracks* track in temp->t) {
					if (track->b_point != nullptr) {
						node* temp2 = track->b_point;
						glLineWidth(3.0);
						glColor3f((1.0 / 255.0) * 138.0, (1.0 / 255.0) * 8.0, 8.0 * (1.0 / 255.0));
						glBegin(GL_LINES);

						glVertex3f(temp2->pos.x, temp2->pos.y, -5.0);
						glVertex3f(x, y, -5.0);
						glEnd();
					}
					}
				}

			for each(node* temp in current->v){
				x = temp->pos.x;
				y = temp->pos.y;

				GLfloat size = (2.0 / ((float)lineAmount));
				temp->visited = true;

				glBegin(GL_TRIANGLE_FAN);
				glColor3f((1.0/255.0)*153.0, (1.0 / 255.0)*180.0, 209.0*(1.0 / 255.0));
				int num_segments = 60;
			
				for (int i = 0; i < num_segments; i++)
				{
					float theta = 2.0f * 3.14f * float(i) / float(num_segments);

					float x1 = size * cosf(theta);
					float y1 = size * sinf(theta);

					glVertex3f(x1 + x, y1 + y, -5.0);

				}
				glEnd();
				
				GLfloat offset = 0.05;
				glColor3f(1.0, 0.0, 0.0);
				glRasterPos3f(x - offset, y - offset, -5.0);

				}
			
		}

		System::Void SwapOpenGLBuffers(System::Void)
		{
			SwapBuffers(m_hDC);
		}

		System::Void get_data(graph* x) {
			current = x;
		}

	private:
		HDC m_hDC;
		HGLRC m_hglrc;
		graph* current;

	protected:
		~COpenGL(System::Void)
		{
			this->DestroyHandle();
		}

		GLint MySetPixelFormat(HDC hdc)
		{
			static	PIXELFORMATDESCRIPTOR pfd =				// pfd Tells Windows How We Want Things To Be
			{
				sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
				1,											// Version Number
				PFD_DRAW_TO_WINDOW |						// Format Must Support Window
				PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
				PFD_DOUBLEBUFFER,							// Must Support Double Buffering
				PFD_TYPE_RGBA,								// Request An RGBA Format
				16,										// Select Our Color Depth
				0, 0, 0, 0, 0, 0,							// Color Bits Ignored
				0,											// No Alpha Buffer
				0,											// Shift Bit Ignored
				0,											// No Accumulation Buffer
				0, 0, 0, 0,									// Accumulation Bits Ignored
				16,											// 16Bit Z-Buffer (Depth Buffer)  
				0,											// No Stencil Buffer
				0,											// No Auxiliary Buffer
				PFD_MAIN_PLANE,								// Main Drawing Layer
				0,											// Reserved
				0, 0, 0										// Layer Masks Ignored
			};

			GLint  iPixelFormat;

			// get the device context's best, available pixel format match 
			if ((iPixelFormat = ChoosePixelFormat(hdc, &pfd)) == 0)
			{
				MessageBox::Show("ChoosePixelFormat Failed");
				return 0;
			}

			// make that match the device context's current pixel format 
			if (SetPixelFormat(hdc, iPixelFormat, &pfd) == FALSE)
			{
				MessageBox::Show("SetPixelFormat Failed");
				return 0;
			}

			if ((m_hglrc = wglCreateContext(m_hDC)) == NULL)
			{
				MessageBox::Show("wglCreateContext Failed");
				return 0;
			}

			if ((wglMakeCurrent(m_hDC, m_hglrc)) == NULL)
			{
				MessageBox::Show("wglMakeCurrent Failed");
				return 0;
			}


			return 1;
		}


		GLvoid ReSizeGLScene(GLsizei width, GLsizei height)	
		{
			if (height == 0)										
			{
				height = 1;										
			}

			glViewport(0, 0, width, height);						
			glMatrixMode(GL_PROJECTION);						
			glLoadIdentity();									

			gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

			glMatrixMode(GL_MODELVIEW);							
			glLoadIdentity();									
		}
	};
}