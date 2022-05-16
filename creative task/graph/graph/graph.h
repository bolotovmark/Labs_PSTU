#pragma once

#include <windows.h>
#include <GL/freeglut.h>

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
				InitGL();
			}

			rtri = 0.0f;
			rquad = 0.0f;
		}

		System::Void Render(System::Void)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			glBegin(GL_TRIANGLES);
			glVertex3f(-0.5, -0.5, 0.0);
			glVertex3f(0.0, 0.5, 0.0);
			glVertex3f(0.5, -0.5, 0.0);
			glEnd();

			glutSwapBuffers();					// Decrease the rotation variable for the quad
		}
}