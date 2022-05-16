#pragma once
//#pragma comment(lib,"freeglut.lib")

#include "OpenGL.h"
#include "class_graph.h"
#include <list>

namespace OpenGL_on_a_Windows_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;

	graph* current;
	graph test;
	
	
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			OpenGL = gcnew COpenGL(this, 640, 480);
			button1->Visible = false;
			label43->Text = "";
			{
				label1->Visible = false;
				label2->Visible = false;
				label21->Visible = false; //0

				textBox0_1->Visible = false;
				textBox1_0->Visible = false;
				label22->Visible = false;
				label3->Visible = false;
				label12->Visible = false; //1

				textBox2_0->Visible = false;
				textBox2_1->Visible = false;
				textBox0_2->Visible = false;
				textBox1_2->Visible = false;
				label23->Visible = false;
				label4->Visible = false;
				label14->Visible = false; //2

				textBox3_0->Visible = false;
				textBox3_1->Visible = false;
				textBox3_2->Visible = false;
				label24->Visible = false;
				textBox0_3->Visible = false;
				textBox1_3->Visible = false;
				textBox2_3->Visible = false;
				label13->Visible = false;
				label7->Visible = false;  //3

				textBox4_0->Visible = false;
				textBox4_1->Visible = false;
				textBox4_2->Visible = false;
				textBox4_3->Visible = false;
				label25->Visible = false;
				textBox0_4->Visible = false;
				textBox1_4->Visible = false;
				textBox2_4->Visible = false;
				textBox3_4->Visible = false;
				label18->Visible = false;
				label6->Visible = false;  //4

				textBox5_0->Visible = false;
				textBox5_1->Visible = false;
				textBox5_2->Visible = false;
				textBox5_3->Visible = false;
				textBox5_4->Visible = false;
				label26->Visible = false;
				textBox0_5->Visible = false;
				textBox1_5->Visible = false;
				textBox2_5->Visible = false;
				textBox3_5->Visible = false;
				textBox4_5->Visible = false;
				label17->Visible = false;
				label5->Visible = false; //5

				textBox6_0->Visible = false;
				textBox6_1->Visible = false;
				textBox6_2->Visible = false;
				textBox6_3->Visible = false;
				textBox6_4->Visible = false;
				textBox6_5->Visible = false;
				label27->Visible = false;
				textBox0_6->Visible = false;
				textBox1_6->Visible = false;
				textBox2_6->Visible = false;
				textBox3_6->Visible = false;
				textBox4_6->Visible = false;
				textBox5_6->Visible = false;
				label16->Visible = false;
				label10->Visible = false;  //6

				textBox7_0->Visible = false;
				textBox7_1->Visible = false;
				textBox7_2->Visible = false;
				textBox7_3->Visible = false;
				textBox7_4->Visible = false;
				textBox7_5->Visible = false;
				textBox7_6->Visible = false;
				label28->Visible = false;
				textBox0_7->Visible = false;
				textBox1_7->Visible = false;
				textBox2_7->Visible = false;
				textBox3_7->Visible = false;
				textBox4_7->Visible = false;
				textBox5_7->Visible = false;
				textBox6_7->Visible = false;
				label15->Visible = false;
				label9->Visible = false; //7

				textBox8_0->Visible = false;
				textBox8_1->Visible = false;
				textBox8_2->Visible = false;
				textBox8_3->Visible = false;
				textBox8_4->Visible = false;
				textBox8_5->Visible = false;
				textBox8_6->Visible = false;
				textBox8_7->Visible = false;
				label29->Visible = false;
				textBox0_8->Visible = false;
				textBox1_8->Visible = false;
				textBox2_8->Visible = false;
				textBox3_8->Visible = false;
				textBox4_8->Visible = false;
				textBox5_8->Visible = false;
				textBox6_8->Visible = false;
				textBox7_8->Visible = false;
				label19->Visible = false;
				label8->Visible = false;  //8

				textBox9_0->Visible = false;
				textBox9_1->Visible = false;
				textBox9_2->Visible = false;
				textBox9_3->Visible = false;
				textBox9_4->Visible = false;
				textBox9_5->Visible = false;
				textBox9_6->Visible = false;
				textBox9_7->Visible = false;
				textBox9_8->Visible = false;
				label30->Visible = false;
				textBox0_9->Visible = false;
				textBox1_9->Visible = false;
				textBox2_9->Visible = false;
				textBox3_9->Visible = false;
				textBox4_9->Visible = false;
				textBox5_9->Visible = false;
				textBox6_9->Visible = false;
				textBox7_9->Visible = false;
				textBox8_9->Visible = false;
				label20->Visible = false;
				label11->Visible = false;  //9

				/////

				label32->Visible = false;
				label33->Visible = false;
				label34->Visible = false;
				label35->Visible = false;
				label36->Visible = false;
				label37->Visible = false;
				label38->Visible = false;
				label39->Visible = false;
				label40->Visible = false;
				label41->Visible = false;

				button2->Visible = false;
			}
			

			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	public: System::Windows::Forms::Timer^ timer1;
	protected:

		/*	private: System::Windows::Forms::TextBox^ textBox13;	private: System::Windows::Forms::TextBox^ textBox15;	private: System::Windows::Forms::TextBox^ textBox17;	private: System::Windows::Forms::TextBox^ textBox20;
	
	

	private: System::Windows::Forms::TextBox^ textBox24;
	
	
	
	

	
	
	



	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;

	
	
	


	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;

	private: System::Windows::Forms::TextBox^ textBox35;
	
	
	
	
	

	private: System::Windows::Forms::TextBox^ textBox38;

	private: System::Windows::Forms::TextBox^ textBox41;

	private: System::Windows::Forms::TextBox^ textBox43;
	










			private: System::Windows::Forms::TextBox^ textBox56;








	

	private: System::Windows::Forms::TextBox^ textBox59;
	

	private: System::Windows::Forms::TextBox^ textBox61;


	private: System::Windows::Forms::TextBox^ textBox63;
	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::TextBox^ textBox65;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::TextBox^ textBox68;*/
	/*private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::TextBox^ textBox70;
	private: System::Windows::Forms::TextBox^ textBox71;
	private: System::Windows::Forms::TextBox^ textBox73;
	private: System::Windows::Forms::TextBox^ textBox74;
	private: System::Windows::Forms::TextBox^ textBox76;
	private: System::Windows::Forms::TextBox^ textBox77;
	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::TextBox^ textBox80;
	private: System::Windows::Forms::TextBox^ textBox81;
	private: System::Windows::Forms::TextBox^ textBox82;
	private: System::Windows::Forms::TextBox^ textBox83;
	private: System::Windows::Forms::TextBox^ textBox85;
	private: System::Windows::Forms::TextBox^ textBox86;
	private: System::Windows::Forms::TextBox^ textBox88;

	private: System::Windows::Forms::TextBox^ textBox89;
	private: System::Windows::Forms::TextBox^ textBox90;
	private: System::Windows::Forms::TextBox^ textBox91;
	private: System::Windows::Forms::TextBox^ textBox92;
	private: System::Windows::Forms::TextBox^ textBox93;
	private: System::Windows::Forms::TextBox^ textBox94;
	private: System::Windows::Forms::TextBox^ textBox95;
	private: System::Windows::Forms::TextBox^ textBox96;
	private: System::Windows::Forms::TextBox^ textBox97;
	private: System::Windows::Forms::TextBox^ textBox98;
	private: System::Windows::Forms::TextBox^ textBox99;
	private: System::Windows::Forms::TextBox^ textBox100;
	private: System::Windows::Forms::TextBox^ textBox101;*/































private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;


private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox0_1;
private: System::Windows::Forms::TextBox^ textBox0_2;
private: System::Windows::Forms::TextBox^ textBox1_2;
private: System::Windows::Forms::TextBox^ textBox0_3;
private: System::Windows::Forms::TextBox^ textBox1_3;
private: System::Windows::Forms::TextBox^ textBox0_4;
private: System::Windows::Forms::TextBox^ textBox1_4;
private: System::Windows::Forms::TextBox^ textBox0_5;
private: System::Windows::Forms::TextBox^ textBox1_5;
private: System::Windows::Forms::TextBox^ textBox0_6;
private: System::Windows::Forms::TextBox^ textBox1_6;
private: System::Windows::Forms::TextBox^ textBox0_7;
private: System::Windows::Forms::TextBox^ textBox1_7;
private: System::Windows::Forms::TextBox^ textBox0_8;
private: System::Windows::Forms::TextBox^ textBox1_8;
private: System::Windows::Forms::TextBox^ textBox0_9;
private: System::Windows::Forms::TextBox^ textBox1_9;
private: System::Windows::Forms::TextBox^ textBox1_0;
private: System::Windows::Forms::TextBox^ textBox2_1;
private: System::Windows::Forms::TextBox^ textBox3_1;
private: System::Windows::Forms::TextBox^ textBox3_2;
private: System::Windows::Forms::TextBox^ textBox2_3;
private: System::Windows::Forms::TextBox^ textBox2_4;
private: System::Windows::Forms::TextBox^ textBox3_4;
private: System::Windows::Forms::TextBox^ textBox2_5;
private: System::Windows::Forms::TextBox^ textBox3_5;
private: System::Windows::Forms::TextBox^ textBox2_6;
private: System::Windows::Forms::TextBox^ textBox3_6;
private: System::Windows::Forms::TextBox^ textBox2_7;
private: System::Windows::Forms::TextBox^ textBox3_7;
private: System::Windows::Forms::TextBox^ textBox2_8;
private: System::Windows::Forms::TextBox^ textBox3_8;
private: System::Windows::Forms::TextBox^ textBox2_9;
private: System::Windows::Forms::TextBox^ textBox3_9;
private: System::Windows::Forms::TextBox^ textBox2_0;
private: System::Windows::Forms::TextBox^ textBox3_0;
private: System::Windows::Forms::TextBox^ textBox4_1;
private: System::Windows::Forms::TextBox^ textBox5_1;
private: System::Windows::Forms::TextBox^ textBox4_2;
private: System::Windows::Forms::TextBox^ textBox5_2;
private: System::Windows::Forms::TextBox^ textBox4_3;
private: System::Windows::Forms::TextBox^ textBox5_3;
private: System::Windows::Forms::TextBox^ textBox5_4;
private: System::Windows::Forms::TextBox^ textBox4_5;
private: System::Windows::Forms::TextBox^ textBox4_6;
private: System::Windows::Forms::TextBox^ textBox5_6;
private: System::Windows::Forms::TextBox^ textBox4_7;
private: System::Windows::Forms::TextBox^ textBox5_7;
private: System::Windows::Forms::TextBox^ textBox4_8;
private: System::Windows::Forms::TextBox^ textBox5_8;
private: System::Windows::Forms::TextBox^ textBox4_9;
private: System::Windows::Forms::TextBox^ textBox5_9;
private: System::Windows::Forms::TextBox^ textBox4_0;
private: System::Windows::Forms::TextBox^ textBox5_0;
private: System::Windows::Forms::TextBox^ textBox6_1;
private: System::Windows::Forms::TextBox^ textBox7_1;
private: System::Windows::Forms::TextBox^ textBox6_2;
private: System::Windows::Forms::TextBox^ textBox7_2;
private: System::Windows::Forms::TextBox^ textBox6_3;
private: System::Windows::Forms::TextBox^ textBox7_3;
private: System::Windows::Forms::TextBox^ textBox6_4;
private: System::Windows::Forms::TextBox^ textBox7_4;
private: System::Windows::Forms::TextBox^ textBox6_5;
private: System::Windows::Forms::TextBox^ textBox7_5;
private: System::Windows::Forms::TextBox^ textBox7_6;
private: System::Windows::Forms::TextBox^ textBox6_7;
private: System::Windows::Forms::TextBox^ textBox6_8;
private: System::Windows::Forms::TextBox^ textBox7_8;
private: System::Windows::Forms::TextBox^ textBox6_9;
private: System::Windows::Forms::TextBox^ textBox7_9;
private: System::Windows::Forms::TextBox^ textBox6_0;
private: System::Windows::Forms::TextBox^ textBox7_0;
private: System::Windows::Forms::TextBox^ textBox8_1;
private: System::Windows::Forms::TextBox^ textBox9_1;
private: System::Windows::Forms::TextBox^ textBox8_2;
private: System::Windows::Forms::TextBox^ textBox9_2;
private: System::Windows::Forms::TextBox^ textBox8_3;
private: System::Windows::Forms::TextBox^ textBox9_3;
private: System::Windows::Forms::TextBox^ textBox8_4;
private: System::Windows::Forms::TextBox^ textBox9_4;
private: System::Windows::Forms::TextBox^ textBox8_5;
private: System::Windows::Forms::TextBox^ textBox9_5;
private: System::Windows::Forms::TextBox^ textBox8_6;
private: System::Windows::Forms::TextBox^ textBox9_6;
private: System::Windows::Forms::TextBox^ textBox8_7;
private: System::Windows::Forms::TextBox^ textBox9_7;
private: System::Windows::Forms::TextBox^ textBox9_8;
private: System::Windows::Forms::TextBox^ textBox8_9;
private: System::Windows::Forms::TextBox^ textBox8_0;
private: System::Windows::Forms::TextBox^ textBox9_0;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label44;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		OpenGLForm::COpenGL^ OpenGL;
		
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox0_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8_0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9_0 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label32->ForeColor = System::Drawing::SystemColors::Control;
			this->label32->Location = System::Drawing::Point(641, 74);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(23, 28);
			this->label32->TabIndex = 134;
			this->label32->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label33->ForeColor = System::Drawing::SystemColors::Control;
			this->label33->Location = System::Drawing::Point(641, 114);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(23, 28);
			this->label33->TabIndex = 135;
			this->label33->Text = L"1";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label34->ForeColor = System::Drawing::SystemColors::Control;
			this->label34->Location = System::Drawing::Point(641, 152);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(23, 28);
			this->label34->TabIndex = 136;
			this->label34->Text = L"2";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label35->ForeColor = System::Drawing::SystemColors::Control;
			this->label35->Location = System::Drawing::Point(641, 190);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(23, 28);
			this->label35->TabIndex = 137;
			this->label35->Text = L"3";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label36->ForeColor = System::Drawing::SystemColors::Control;
			this->label36->Location = System::Drawing::Point(641, 227);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 28);
			this->label36->TabIndex = 138;
			this->label36->Text = L"4";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label37->ForeColor = System::Drawing::SystemColors::Control;
			this->label37->Location = System::Drawing::Point(641, 273);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(23, 28);
			this->label37->TabIndex = 139;
			this->label37->Text = L"5";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label38->ForeColor = System::Drawing::SystemColors::Control;
			this->label38->Location = System::Drawing::Point(641, 309);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(23, 28);
			this->label38->TabIndex = 140;
			this->label38->Text = L"6";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label39->ForeColor = System::Drawing::SystemColors::Control;
			this->label39->Location = System::Drawing::Point(641, 346);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(23, 28);
			this->label39->TabIndex = 141;
			this->label39->Text = L"7";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label40->ForeColor = System::Drawing::SystemColors::Control;
			this->label40->Location = System::Drawing::Point(641, 385);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(23, 28);
			this->label40->TabIndex = 142;
			this->label40->Text = L"8";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label41->ForeColor = System::Drawing::SystemColors::Control;
			this->label41->Location = System::Drawing::Point(641, 419);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(23, 28);
			this->label41->TabIndex = 143;
			this->label41->Text = L"9";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(51, 536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Simulation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(390, 83);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox0_1
			// 
			this->textBox0_1->Location = System::Drawing::Point(306, 309);
			this->textBox0_1->Name = L"textBox0_1";
			this->textBox0_1->Size = System::Drawing::Size(44, 22);
			this->textBox0_1->TabIndex = 2;
			this->textBox0_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_1_TextChanged);
			// 
			// textBox0_2
			// 
			this->textBox0_2->Location = System::Drawing::Point(356, 309);
			this->textBox0_2->Name = L"textBox0_2";
			this->textBox0_2->Size = System::Drawing::Size(44, 22);
			this->textBox0_2->TabIndex = 5;
			this->textBox0_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_2_TextChanged);
			// 
			// textBox1_2
			// 
			this->textBox1_2->Location = System::Drawing::Point(356, 337);
			this->textBox1_2->Name = L"textBox1_2";
			this->textBox1_2->Size = System::Drawing::Size(44, 22);
			this->textBox1_2->TabIndex = 6;
			this->textBox1_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_2_TextChanged);
			// 
			// textBox0_3
			// 
			this->textBox0_3->Location = System::Drawing::Point(406, 309);
			this->textBox0_3->Name = L"textBox0_3";
			this->textBox0_3->Size = System::Drawing::Size(44, 22);
			this->textBox0_3->TabIndex = 7;
			this->textBox0_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_3_TextChanged);
			// 
			// textBox1_3
			// 
			this->textBox1_3->Location = System::Drawing::Point(406, 337);
			this->textBox1_3->Name = L"textBox1_3";
			this->textBox1_3->Size = System::Drawing::Size(44, 22);
			this->textBox1_3->TabIndex = 8;
			this->textBox1_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_3_TextChanged);
			// 
			// textBox0_4
			// 
			this->textBox0_4->Location = System::Drawing::Point(456, 309);
			this->textBox0_4->Name = L"textBox0_4";
			this->textBox0_4->Size = System::Drawing::Size(44, 22);
			this->textBox0_4->TabIndex = 9;
			this->textBox0_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_4_TextChanged);
			// 
			// textBox1_4
			// 
			this->textBox1_4->Location = System::Drawing::Point(456, 337);
			this->textBox1_4->Name = L"textBox1_4";
			this->textBox1_4->Size = System::Drawing::Size(44, 22);
			this->textBox1_4->TabIndex = 10;
			this->textBox1_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_4_TextChanged);
			// 
			// textBox0_5
			// 
			this->textBox0_5->Location = System::Drawing::Point(506, 309);
			this->textBox0_5->Name = L"textBox0_5";
			this->textBox0_5->Size = System::Drawing::Size(44, 22);
			this->textBox0_5->TabIndex = 11;
			this->textBox0_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_5_TextChanged);
			// 
			// textBox1_5
			// 
			this->textBox1_5->Location = System::Drawing::Point(506, 337);
			this->textBox1_5->Name = L"textBox1_5";
			this->textBox1_5->Size = System::Drawing::Size(44, 22);
			this->textBox1_5->TabIndex = 12;
			this->textBox1_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_5_TextChanged);
			// 
			// textBox0_6
			// 
			this->textBox0_6->Location = System::Drawing::Point(556, 309);
			this->textBox0_6->Name = L"textBox0_6";
			this->textBox0_6->Size = System::Drawing::Size(44, 22);
			this->textBox0_6->TabIndex = 13;
			this->textBox0_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_6_TextChanged);
			// 
			// textBox1_6
			// 
			this->textBox1_6->Location = System::Drawing::Point(556, 337);
			this->textBox1_6->Name = L"textBox1_6";
			this->textBox1_6->Size = System::Drawing::Size(44, 22);
			this->textBox1_6->TabIndex = 14;
			this->textBox1_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_6_TextChanged);
			// 
			// textBox0_7
			// 
			this->textBox0_7->Location = System::Drawing::Point(606, 309);
			this->textBox0_7->Name = L"textBox0_7";
			this->textBox0_7->Size = System::Drawing::Size(44, 22);
			this->textBox0_7->TabIndex = 15;
			this->textBox0_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_7_TextChanged);
			// 
			// textBox1_7
			// 
			this->textBox1_7->Location = System::Drawing::Point(606, 337);
			this->textBox1_7->Name = L"textBox1_7";
			this->textBox1_7->Size = System::Drawing::Size(44, 22);
			this->textBox1_7->TabIndex = 16;
			this->textBox1_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_7_TextChanged);
			// 
			// textBox0_8
			// 
			this->textBox0_8->Location = System::Drawing::Point(656, 309);
			this->textBox0_8->Name = L"textBox0_8";
			this->textBox0_8->Size = System::Drawing::Size(44, 22);
			this->textBox0_8->TabIndex = 17;
			this->textBox0_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_8_TextChanged);
			// 
			// textBox1_8
			// 
			this->textBox1_8->Location = System::Drawing::Point(656, 337);
			this->textBox1_8->Name = L"textBox1_8";
			this->textBox1_8->Size = System::Drawing::Size(44, 22);
			this->textBox1_8->TabIndex = 18;
			this->textBox1_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_8_TextChanged);
			// 
			// textBox0_9
			// 
			this->textBox0_9->Location = System::Drawing::Point(706, 309);
			this->textBox0_9->Name = L"textBox0_9";
			this->textBox0_9->Size = System::Drawing::Size(44, 22);
			this->textBox0_9->TabIndex = 19;
			this->textBox0_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_9_TextChanged);
			// 
			// textBox1_9
			// 
			this->textBox1_9->Location = System::Drawing::Point(706, 337);
			this->textBox1_9->Name = L"textBox1_9";
			this->textBox1_9->Size = System::Drawing::Size(44, 22);
			this->textBox1_9->TabIndex = 20;
			this->textBox1_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_9_TextChanged);
			// 
			// textBox1_0
			// 
			this->textBox1_0->Location = System::Drawing::Point(256, 337);
			this->textBox1_0->Name = L"textBox1_0";
			this->textBox1_0->Size = System::Drawing::Size(44, 22);
			this->textBox1_0->TabIndex = 22;
			this->textBox1_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_0_TextChanged);
			// 
			// textBox2_1
			// 
			this->textBox2_1->Location = System::Drawing::Point(306, 365);
			this->textBox2_1->Name = L"textBox2_1";
			this->textBox2_1->Size = System::Drawing::Size(44, 22);
			this->textBox2_1->TabIndex = 23;
			this->textBox2_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_1_TextChanged);
			// 
			// textBox3_1
			// 
			this->textBox3_1->Location = System::Drawing::Point(306, 393);
			this->textBox3_1->Name = L"textBox3_1";
			this->textBox3_1->Size = System::Drawing::Size(44, 22);
			this->textBox3_1->TabIndex = 24;
			this->textBox3_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_1_TextChanged);
			// 
			// textBox3_2
			// 
			this->textBox3_2->Location = System::Drawing::Point(356, 393);
			this->textBox3_2->Name = L"textBox3_2";
			this->textBox3_2->Size = System::Drawing::Size(44, 22);
			this->textBox3_2->TabIndex = 26;
			this->textBox3_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_2_TextChanged);
			// 
			// textBox2_3
			// 
			this->textBox2_3->Location = System::Drawing::Point(406, 365);
			this->textBox2_3->Name = L"textBox2_3";
			this->textBox2_3->Size = System::Drawing::Size(44, 22);
			this->textBox2_3->TabIndex = 27;
			this->textBox2_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_3_TextChanged);
			// 
			// textBox2_4
			// 
			this->textBox2_4->Location = System::Drawing::Point(456, 365);
			this->textBox2_4->Name = L"textBox2_4";
			this->textBox2_4->Size = System::Drawing::Size(44, 22);
			this->textBox2_4->TabIndex = 29;
			this->textBox2_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_4_TextChanged);
			// 
			// textBox3_4
			// 
			this->textBox3_4->Location = System::Drawing::Point(456, 393);
			this->textBox3_4->Name = L"textBox3_4";
			this->textBox3_4->Size = System::Drawing::Size(44, 22);
			this->textBox3_4->TabIndex = 30;
			this->textBox3_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_4_TextChanged);
			// 
			// textBox2_5
			// 
			this->textBox2_5->Location = System::Drawing::Point(506, 365);
			this->textBox2_5->Name = L"textBox2_5";
			this->textBox2_5->Size = System::Drawing::Size(44, 22);
			this->textBox2_5->TabIndex = 31;
			this->textBox2_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_5_TextChanged);
			// 
			// textBox3_5
			// 
			this->textBox3_5->Location = System::Drawing::Point(506, 393);
			this->textBox3_5->Name = L"textBox3_5";
			this->textBox3_5->Size = System::Drawing::Size(44, 22);
			this->textBox3_5->TabIndex = 32;
			this->textBox3_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_5_TextChanged);
			// 
			// textBox2_6
			// 
			this->textBox2_6->Location = System::Drawing::Point(556, 365);
			this->textBox2_6->Name = L"textBox2_6";
			this->textBox2_6->Size = System::Drawing::Size(44, 22);
			this->textBox2_6->TabIndex = 33;
			this->textBox2_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_6_TextChanged);
			// 
			// textBox3_6
			// 
			this->textBox3_6->Location = System::Drawing::Point(556, 393);
			this->textBox3_6->Name = L"textBox3_6";
			this->textBox3_6->Size = System::Drawing::Size(44, 22);
			this->textBox3_6->TabIndex = 34;
			this->textBox3_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_6_TextChanged);
			// 
			// textBox2_7
			// 
			this->textBox2_7->Location = System::Drawing::Point(606, 365);
			this->textBox2_7->Name = L"textBox2_7";
			this->textBox2_7->Size = System::Drawing::Size(44, 22);
			this->textBox2_7->TabIndex = 35;
			this->textBox2_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_7_TextChanged);
			// 
			// textBox3_7
			// 
			this->textBox3_7->Location = System::Drawing::Point(606, 393);
			this->textBox3_7->Name = L"textBox3_7";
			this->textBox3_7->Size = System::Drawing::Size(44, 22);
			this->textBox3_7->TabIndex = 36;
			this->textBox3_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_7_TextChanged);
			// 
			// textBox2_8
			// 
			this->textBox2_8->Location = System::Drawing::Point(656, 365);
			this->textBox2_8->Name = L"textBox2_8";
			this->textBox2_8->Size = System::Drawing::Size(44, 22);
			this->textBox2_8->TabIndex = 37;
			this->textBox2_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_8_TextChanged);
			// 
			// textBox3_8
			// 
			this->textBox3_8->Location = System::Drawing::Point(656, 393);
			this->textBox3_8->Name = L"textBox3_8";
			this->textBox3_8->Size = System::Drawing::Size(44, 22);
			this->textBox3_8->TabIndex = 38;
			this->textBox3_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_8_TextChanged);
			// 
			// textBox2_9
			// 
			this->textBox2_9->Location = System::Drawing::Point(706, 365);
			this->textBox2_9->Name = L"textBox2_9";
			this->textBox2_9->Size = System::Drawing::Size(44, 22);
			this->textBox2_9->TabIndex = 39;
			this->textBox2_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_9_TextChanged);
			// 
			// textBox3_9
			// 
			this->textBox3_9->Location = System::Drawing::Point(706, 393);
			this->textBox3_9->Name = L"textBox3_9";
			this->textBox3_9->Size = System::Drawing::Size(44, 22);
			this->textBox3_9->TabIndex = 40;
			this->textBox3_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_9_TextChanged);
			// 
			// textBox2_0
			// 
			this->textBox2_0->Location = System::Drawing::Point(256, 365);
			this->textBox2_0->Name = L"textBox2_0";
			this->textBox2_0->Size = System::Drawing::Size(44, 22);
			this->textBox2_0->TabIndex = 41;
			this->textBox2_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_0_TextChanged);
			// 
			// textBox3_0
			// 
			this->textBox3_0->Location = System::Drawing::Point(256, 393);
			this->textBox3_0->Name = L"textBox3_0";
			this->textBox3_0->Size = System::Drawing::Size(44, 22);
			this->textBox3_0->TabIndex = 42;
			this->textBox3_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_0_TextChanged);
			// 
			// textBox4_1
			// 
			this->textBox4_1->Location = System::Drawing::Point(306, 421);
			this->textBox4_1->Name = L"textBox4_1";
			this->textBox4_1->Size = System::Drawing::Size(44, 22);
			this->textBox4_1->TabIndex = 43;
			this->textBox4_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_1_TextChanged);
			// 
			// textBox5_1
			// 
			this->textBox5_1->Location = System::Drawing::Point(306, 449);
			this->textBox5_1->Name = L"textBox5_1";
			this->textBox5_1->Size = System::Drawing::Size(44, 22);
			this->textBox5_1->TabIndex = 44;
			this->textBox5_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_1_TextChanged);
			// 
			// textBox4_2
			// 
			this->textBox4_2->Location = System::Drawing::Point(356, 421);
			this->textBox4_2->Name = L"textBox4_2";
			this->textBox4_2->Size = System::Drawing::Size(44, 22);
			this->textBox4_2->TabIndex = 45;
			this->textBox4_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_2_TextChanged);
			// 
			// textBox5_2
			// 
			this->textBox5_2->Location = System::Drawing::Point(356, 449);
			this->textBox5_2->Name = L"textBox5_2";
			this->textBox5_2->Size = System::Drawing::Size(44, 22);
			this->textBox5_2->TabIndex = 46;
			this->textBox5_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_2_TextChanged);
			// 
			// textBox4_3
			// 
			this->textBox4_3->Location = System::Drawing::Point(406, 421);
			this->textBox4_3->Name = L"textBox4_3";
			this->textBox4_3->Size = System::Drawing::Size(44, 22);
			this->textBox4_3->TabIndex = 47;
			this->textBox4_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_3_TextChanged);
			// 
			// textBox5_3
			// 
			this->textBox5_3->Location = System::Drawing::Point(406, 449);
			this->textBox5_3->Name = L"textBox5_3";
			this->textBox5_3->Size = System::Drawing::Size(44, 22);
			this->textBox5_3->TabIndex = 48;
			this->textBox5_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_3_TextChanged);
			// 
			// textBox5_4
			// 
			this->textBox5_4->Location = System::Drawing::Point(456, 449);
			this->textBox5_4->Name = L"textBox5_4";
			this->textBox5_4->Size = System::Drawing::Size(44, 22);
			this->textBox5_4->TabIndex = 50;
			this->textBox5_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_4_TextChanged);
			// 
			// textBox4_5
			// 
			this->textBox4_5->Location = System::Drawing::Point(506, 421);
			this->textBox4_5->Name = L"textBox4_5";
			this->textBox4_5->Size = System::Drawing::Size(44, 22);
			this->textBox4_5->TabIndex = 51;
			this->textBox4_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_5_TextChanged);
			// 
			// textBox4_6
			// 
			this->textBox4_6->Location = System::Drawing::Point(556, 421);
			this->textBox4_6->Name = L"textBox4_6";
			this->textBox4_6->Size = System::Drawing::Size(44, 22);
			this->textBox4_6->TabIndex = 53;
			this->textBox4_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_6_TextChanged);
			// 
			// textBox5_6
			// 
			this->textBox5_6->Location = System::Drawing::Point(556, 449);
			this->textBox5_6->Name = L"textBox5_6";
			this->textBox5_6->Size = System::Drawing::Size(44, 22);
			this->textBox5_6->TabIndex = 54;
			this->textBox5_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_6_TextChanged);
			// 
			// textBox4_7
			// 
			this->textBox4_7->Location = System::Drawing::Point(606, 421);
			this->textBox4_7->Name = L"textBox4_7";
			this->textBox4_7->Size = System::Drawing::Size(44, 22);
			this->textBox4_7->TabIndex = 55;
			this->textBox4_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_7_TextChanged);
			// 
			// textBox5_7
			// 
			this->textBox5_7->Location = System::Drawing::Point(606, 449);
			this->textBox5_7->Name = L"textBox5_7";
			this->textBox5_7->Size = System::Drawing::Size(44, 22);
			this->textBox5_7->TabIndex = 56;
			this->textBox5_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_7_TextChanged);
			// 
			// textBox4_8
			// 
			this->textBox4_8->Location = System::Drawing::Point(656, 421);
			this->textBox4_8->Name = L"textBox4_8";
			this->textBox4_8->Size = System::Drawing::Size(44, 22);
			this->textBox4_8->TabIndex = 57;
			this->textBox4_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_8_TextChanged);
			// 
			// textBox5_8
			// 
			this->textBox5_8->Location = System::Drawing::Point(656, 449);
			this->textBox5_8->Name = L"textBox5_8";
			this->textBox5_8->Size = System::Drawing::Size(44, 22);
			this->textBox5_8->TabIndex = 58;
			this->textBox5_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_8_TextChanged);
			// 
			// textBox4_9
			// 
			this->textBox4_9->Location = System::Drawing::Point(706, 421);
			this->textBox4_9->Name = L"textBox4_9";
			this->textBox4_9->Size = System::Drawing::Size(44, 22);
			this->textBox4_9->TabIndex = 59;
			this->textBox4_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_9_TextChanged);
			// 
			// textBox5_9
			// 
			this->textBox5_9->Location = System::Drawing::Point(706, 449);
			this->textBox5_9->Name = L"textBox5_9";
			this->textBox5_9->Size = System::Drawing::Size(44, 22);
			this->textBox5_9->TabIndex = 60;
			this->textBox5_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_9_TextChanged);
			// 
			// textBox4_0
			// 
			this->textBox4_0->Location = System::Drawing::Point(256, 421);
			this->textBox4_0->Name = L"textBox4_0";
			this->textBox4_0->Size = System::Drawing::Size(44, 22);
			this->textBox4_0->TabIndex = 61;
			this->textBox4_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_0_TextChanged);
			// 
			// textBox5_0
			// 
			this->textBox5_0->Location = System::Drawing::Point(256, 449);
			this->textBox5_0->Name = L"textBox5_0";
			this->textBox5_0->Size = System::Drawing::Size(44, 22);
			this->textBox5_0->TabIndex = 62;
			this->textBox5_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_0_TextChanged);
			// 
			// textBox6_1
			// 
			this->textBox6_1->Location = System::Drawing::Point(306, 477);
			this->textBox6_1->Name = L"textBox6_1";
			this->textBox6_1->Size = System::Drawing::Size(44, 22);
			this->textBox6_1->TabIndex = 63;
			this->textBox6_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_1_TextChanged);
			// 
			// textBox7_1
			// 
			this->textBox7_1->Location = System::Drawing::Point(306, 505);
			this->textBox7_1->Name = L"textBox7_1";
			this->textBox7_1->Size = System::Drawing::Size(44, 22);
			this->textBox7_1->TabIndex = 64;
			this->textBox7_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_1_TextChanged);
			// 
			// textBox6_2
			// 
			this->textBox6_2->Location = System::Drawing::Point(356, 477);
			this->textBox6_2->Name = L"textBox6_2";
			this->textBox6_2->Size = System::Drawing::Size(44, 22);
			this->textBox6_2->TabIndex = 65;
			this->textBox6_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_2_TextChanged);
			// 
			// textBox7_2
			// 
			this->textBox7_2->Location = System::Drawing::Point(356, 505);
			this->textBox7_2->Name = L"textBox7_2";
			this->textBox7_2->Size = System::Drawing::Size(44, 22);
			this->textBox7_2->TabIndex = 66;
			this->textBox7_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_2_TextChanged);
			// 
			// textBox6_3
			// 
			this->textBox6_3->Location = System::Drawing::Point(406, 477);
			this->textBox6_3->Name = L"textBox6_3";
			this->textBox6_3->Size = System::Drawing::Size(44, 22);
			this->textBox6_3->TabIndex = 67;
			this->textBox6_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_3_TextChanged);
			// 
			// textBox7_3
			// 
			this->textBox7_3->Location = System::Drawing::Point(406, 505);
			this->textBox7_3->Name = L"textBox7_3";
			this->textBox7_3->Size = System::Drawing::Size(44, 22);
			this->textBox7_3->TabIndex = 68;
			this->textBox7_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_3_TextChanged);
			// 
			// textBox6_4
			// 
			this->textBox6_4->Location = System::Drawing::Point(456, 477);
			this->textBox6_4->Name = L"textBox6_4";
			this->textBox6_4->Size = System::Drawing::Size(44, 22);
			this->textBox6_4->TabIndex = 69;
			this->textBox6_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_4_TextChanged);
			// 
			// textBox7_4
			// 
			this->textBox7_4->Location = System::Drawing::Point(456, 505);
			this->textBox7_4->Name = L"textBox7_4";
			this->textBox7_4->Size = System::Drawing::Size(44, 22);
			this->textBox7_4->TabIndex = 70;
			this->textBox7_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_4_TextChanged);
			// 
			// textBox6_5
			// 
			this->textBox6_5->Location = System::Drawing::Point(506, 477);
			this->textBox6_5->Name = L"textBox6_5";
			this->textBox6_5->Size = System::Drawing::Size(44, 22);
			this->textBox6_5->TabIndex = 71;
			this->textBox6_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_5_TextChanged);
			// 
			// textBox7_5
			// 
			this->textBox7_5->Location = System::Drawing::Point(506, 505);
			this->textBox7_5->Name = L"textBox7_5";
			this->textBox7_5->Size = System::Drawing::Size(44, 22);
			this->textBox7_5->TabIndex = 72;
			this->textBox7_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_5_TextChanged);
			// 
			// textBox7_6
			// 
			this->textBox7_6->Location = System::Drawing::Point(556, 505);
			this->textBox7_6->Name = L"textBox7_6";
			this->textBox7_6->Size = System::Drawing::Size(44, 22);
			this->textBox7_6->TabIndex = 74;
			this->textBox7_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_6_TextChanged);
			// 
			// textBox6_7
			// 
			this->textBox6_7->Location = System::Drawing::Point(606, 477);
			this->textBox6_7->Name = L"textBox6_7";
			this->textBox6_7->Size = System::Drawing::Size(44, 22);
			this->textBox6_7->TabIndex = 75;
			this->textBox6_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_7_TextChanged);
			// 
			// textBox6_8
			// 
			this->textBox6_8->Location = System::Drawing::Point(656, 477);
			this->textBox6_8->Name = L"textBox6_8";
			this->textBox6_8->Size = System::Drawing::Size(44, 22);
			this->textBox6_8->TabIndex = 77;
			this->textBox6_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_8_TextChanged);
			// 
			// textBox7_8
			// 
			this->textBox7_8->Location = System::Drawing::Point(656, 505);
			this->textBox7_8->Name = L"textBox7_8";
			this->textBox7_8->Size = System::Drawing::Size(44, 22);
			this->textBox7_8->TabIndex = 78;
			this->textBox7_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_8_TextChanged);
			// 
			// textBox6_9
			// 
			this->textBox6_9->Location = System::Drawing::Point(706, 477);
			this->textBox6_9->Name = L"textBox6_9";
			this->textBox6_9->Size = System::Drawing::Size(44, 22);
			this->textBox6_9->TabIndex = 79;
			this->textBox6_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_9_TextChanged);
			// 
			// textBox7_9
			// 
			this->textBox7_9->Location = System::Drawing::Point(706, 505);
			this->textBox7_9->Name = L"textBox7_9";
			this->textBox7_9->Size = System::Drawing::Size(44, 22);
			this->textBox7_9->TabIndex = 80;
			this->textBox7_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_9_TextChanged);
			// 
			// textBox6_0
			// 
			this->textBox6_0->Location = System::Drawing::Point(256, 477);
			this->textBox6_0->Name = L"textBox6_0";
			this->textBox6_0->Size = System::Drawing::Size(44, 22);
			this->textBox6_0->TabIndex = 81;
			this->textBox6_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_0_TextChanged);
			// 
			// textBox7_0
			// 
			this->textBox7_0->Location = System::Drawing::Point(256, 505);
			this->textBox7_0->Name = L"textBox7_0";
			this->textBox7_0->Size = System::Drawing::Size(44, 22);
			this->textBox7_0->TabIndex = 82;
			this->textBox7_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_0_TextChanged);
			// 
			// textBox8_1
			// 
			this->textBox8_1->Location = System::Drawing::Point(306, 533);
			this->textBox8_1->Name = L"textBox8_1";
			this->textBox8_1->Size = System::Drawing::Size(44, 22);
			this->textBox8_1->TabIndex = 83;
			this->textBox8_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_1_TextChanged);
			// 
			// textBox9_1
			// 
			this->textBox9_1->Location = System::Drawing::Point(306, 561);
			this->textBox9_1->Name = L"textBox9_1";
			this->textBox9_1->Size = System::Drawing::Size(44, 22);
			this->textBox9_1->TabIndex = 84;
			this->textBox9_1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_1_TextChanged);
			// 
			// textBox8_2
			// 
			this->textBox8_2->Location = System::Drawing::Point(356, 533);
			this->textBox8_2->Name = L"textBox8_2";
			this->textBox8_2->Size = System::Drawing::Size(44, 22);
			this->textBox8_2->TabIndex = 85;
			this->textBox8_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_2_TextChanged);
			// 
			// textBox9_2
			// 
			this->textBox9_2->Location = System::Drawing::Point(356, 561);
			this->textBox9_2->Name = L"textBox9_2";
			this->textBox9_2->Size = System::Drawing::Size(44, 22);
			this->textBox9_2->TabIndex = 86;
			this->textBox9_2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_2_TextChanged);
			// 
			// textBox8_3
			// 
			this->textBox8_3->Location = System::Drawing::Point(406, 533);
			this->textBox8_3->Name = L"textBox8_3";
			this->textBox8_3->Size = System::Drawing::Size(44, 22);
			this->textBox8_3->TabIndex = 87;
			this->textBox8_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_3_TextChanged);
			// 
			// textBox9_3
			// 
			this->textBox9_3->Location = System::Drawing::Point(406, 561);
			this->textBox9_3->Name = L"textBox9_3";
			this->textBox9_3->Size = System::Drawing::Size(44, 22);
			this->textBox9_3->TabIndex = 88;
			this->textBox9_3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_3_TextChanged);
			// 
			// textBox8_4
			// 
			this->textBox8_4->Location = System::Drawing::Point(456, 533);
			this->textBox8_4->Name = L"textBox8_4";
			this->textBox8_4->Size = System::Drawing::Size(44, 22);
			this->textBox8_4->TabIndex = 89;
			this->textBox8_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_4_TextChanged);
			// 
			// textBox9_4
			// 
			this->textBox9_4->Location = System::Drawing::Point(456, 561);
			this->textBox9_4->Name = L"textBox9_4";
			this->textBox9_4->Size = System::Drawing::Size(44, 22);
			this->textBox9_4->TabIndex = 90;
			this->textBox9_4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_4_TextChanged);
			// 
			// textBox8_5
			// 
			this->textBox8_5->Location = System::Drawing::Point(506, 533);
			this->textBox8_5->Name = L"textBox8_5";
			this->textBox8_5->Size = System::Drawing::Size(44, 22);
			this->textBox8_5->TabIndex = 91;
			this->textBox8_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_5_TextChanged);
			// 
			// textBox9_5
			// 
			this->textBox9_5->Location = System::Drawing::Point(506, 561);
			this->textBox9_5->Name = L"textBox9_5";
			this->textBox9_5->Size = System::Drawing::Size(44, 22);
			this->textBox9_5->TabIndex = 92;
			this->textBox9_5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_5_TextChanged);
			// 
			// textBox8_6
			// 
			this->textBox8_6->Location = System::Drawing::Point(556, 533);
			this->textBox8_6->Name = L"textBox8_6";
			this->textBox8_6->Size = System::Drawing::Size(44, 22);
			this->textBox8_6->TabIndex = 93;
			this->textBox8_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_6_TextChanged);
			// 
			// textBox9_6
			// 
			this->textBox9_6->Location = System::Drawing::Point(556, 561);
			this->textBox9_6->Name = L"textBox9_6";
			this->textBox9_6->Size = System::Drawing::Size(44, 22);
			this->textBox9_6->TabIndex = 94;
			this->textBox9_6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_6_TextChanged);
			// 
			// textBox8_7
			// 
			this->textBox8_7->Location = System::Drawing::Point(606, 533);
			this->textBox8_7->Name = L"textBox8_7";
			this->textBox8_7->Size = System::Drawing::Size(44, 22);
			this->textBox8_7->TabIndex = 95;
			this->textBox8_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_7_TextChanged);
			// 
			// textBox9_7
			// 
			this->textBox9_7->Location = System::Drawing::Point(606, 561);
			this->textBox9_7->Name = L"textBox9_7";
			this->textBox9_7->Size = System::Drawing::Size(44, 22);
			this->textBox9_7->TabIndex = 96;
			this->textBox9_7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_7_TextChanged);
			// 
			// textBox9_8
			// 
			this->textBox9_8->Location = System::Drawing::Point(656, 561);
			this->textBox9_8->Name = L"textBox9_8";
			this->textBox9_8->Size = System::Drawing::Size(44, 22);
			this->textBox9_8->TabIndex = 98;
			this->textBox9_8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_8_TextChanged);
			// 
			// textBox8_9
			// 
			this->textBox8_9->Location = System::Drawing::Point(706, 533);
			this->textBox8_9->Name = L"textBox8_9";
			this->textBox8_9->Size = System::Drawing::Size(44, 22);
			this->textBox8_9->TabIndex = 99;
			this->textBox8_9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_9_TextChanged);
			// 
			// textBox8_0
			// 
			this->textBox8_0->Location = System::Drawing::Point(256, 533);
			this->textBox8_0->Name = L"textBox8_0";
			this->textBox8_0->Size = System::Drawing::Size(44, 22);
			this->textBox8_0->TabIndex = 101;
			this->textBox8_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_0_TextChanged);
			// 
			// textBox9_0
			// 
			this->textBox9_0->Location = System::Drawing::Point(256, 561);
			this->textBox9_0->Name = L"textBox9_0";
			this->textBox9_0->Size = System::Drawing::Size(44, 22);
			this->textBox9_0->TabIndex = 102;
			this->textBox9_0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_0_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label1->Location = System::Drawing::Point(263, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 103;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label2->Location = System::Drawing::Point(221, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 31);
			this->label2->TabIndex = 104;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label3->Location = System::Drawing::Point(313, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 31);
			this->label3->TabIndex = 105;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label4->Location = System::Drawing::Point(363, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 31);
			this->label4->TabIndex = 106;
			this->label4->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label7->Location = System::Drawing::Point(413, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 31);
			this->label7->TabIndex = 107;
			this->label7->Text = L"3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label6->Location = System::Drawing::Point(463, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 31);
			this->label6->TabIndex = 108;
			this->label6->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label5->Location = System::Drawing::Point(513, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 31);
			this->label5->TabIndex = 109;
			this->label5->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label10->Location = System::Drawing::Point(562, 276);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 31);
			this->label10->TabIndex = 110;
			this->label10->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label9->Location = System::Drawing::Point(612, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 31);
			this->label9->TabIndex = 111;
			this->label9->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label8->Location = System::Drawing::Point(662, 276);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 31);
			this->label8->TabIndex = 112;
			this->label8->Text = L"8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label11->Location = System::Drawing::Point(712, 275);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 31);
			this->label11->TabIndex = 113;
			this->label11->Text = L"9";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label12->Location = System::Drawing::Point(221, 332);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 31);
			this->label12->TabIndex = 114;
			this->label12->Text = L"1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label14->Location = System::Drawing::Point(221, 361);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 31);
			this->label14->TabIndex = 115;
			this->label14->Text = L"2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label13->Location = System::Drawing::Point(221, 388);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 31);
			this->label13->TabIndex = 116;
			this->label13->Text = L"3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label18->Location = System::Drawing::Point(221, 416);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 31);
			this->label18->TabIndex = 117;
			this->label18->Text = L"4";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label17->Location = System::Drawing::Point(221, 444);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 31);
			this->label17->TabIndex = 118;
			this->label17->Text = L"5";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label16->Location = System::Drawing::Point(221, 472);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 31);
			this->label16->TabIndex = 119;
			this->label16->Text = L"6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label15->Location = System::Drawing::Point(221, 500);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 31);
			this->label15->TabIndex = 120;
			this->label15->Text = L"7";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label19->Location = System::Drawing::Point(221, 528);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 31);
			this->label19->TabIndex = 121;
			this->label19->Text = L"8";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label20->Location = System::Drawing::Point(221, 556);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(29, 31);
			this->label20->TabIndex = 122;
			this->label20->Text = L"9";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label21->Location = System::Drawing::Point(255, 311);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(42, 20);
			this->label21->TabIndex = 123;
			this->label21->Text = L"XXX";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label22->Location = System::Drawing::Point(306, 337);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 20);
			this->label22->TabIndex = 124;
			this->label22->Text = L"XXX";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label23->Location = System::Drawing::Point(356, 367);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 20);
			this->label23->TabIndex = 125;
			this->label23->Text = L"XXX";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label24->Location = System::Drawing::Point(406, 393);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(42, 20);
			this->label24->TabIndex = 126;
			this->label24->Text = L"XXX";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label25->Location = System::Drawing::Point(456, 421);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 20);
			this->label25->TabIndex = 127;
			this->label25->Text = L"XXX";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label26->Location = System::Drawing::Point(506, 449);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(42, 20);
			this->label26->TabIndex = 128;
			this->label26->Text = L"XXX";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label27->Location = System::Drawing::Point(556, 477);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(42, 20);
			this->label27->TabIndex = 129;
			this->label27->Text = L"XXX";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label28->Location = System::Drawing::Point(606, 507);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(42, 20);
			this->label28->TabIndex = 130;
			this->label28->Text = L"XXX";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label29->Location = System::Drawing::Point(658, 535);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(42, 20);
			this->label29->TabIndex = 131;
			this->label29->Text = L"XXX";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label30->Location = System::Drawing::Point(708, 561);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(42, 20);
			this->label30->TabIndex = 132;
			this->label30->Text = L"XXX";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label31->Location = System::Drawing::Point(233, 83);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(132, 23);
			this->label31->TabIndex = 133;
			this->label31->Text = L"Число городов:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label42->Location = System::Drawing::Point(222, 229);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(355, 45);
			this->label42->TabIndex = 144;
			this->label42->Text = L"Матрица смежности";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label43->Location = System::Drawing::Point(229, 127);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(64, 23);
			this->label43->TabIndex = 145;
			this->label43->Text = L"label43";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button2->Location = System::Drawing::Point(618, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 51);
			this->button2->TabIndex = 146;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->Controls->Add(this->label44);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->label42);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox9_0);
			this->panel1->Controls->Add(this->textBox8_0);
			this->panel1->Controls->Add(this->textBox8_9);
			this->panel1->Controls->Add(this->textBox9_8);
			this->panel1->Controls->Add(this->textBox9_7);
			this->panel1->Controls->Add(this->textBox8_7);
			this->panel1->Controls->Add(this->textBox9_6);
			this->panel1->Controls->Add(this->textBox8_6);
			this->panel1->Controls->Add(this->textBox9_5);
			this->panel1->Controls->Add(this->textBox8_5);
			this->panel1->Controls->Add(this->textBox9_4);
			this->panel1->Controls->Add(this->textBox8_4);
			this->panel1->Controls->Add(this->textBox9_3);
			this->panel1->Controls->Add(this->textBox8_3);
			this->panel1->Controls->Add(this->textBox9_2);
			this->panel1->Controls->Add(this->textBox8_2);
			this->panel1->Controls->Add(this->textBox9_1);
			this->panel1->Controls->Add(this->textBox8_1);
			this->panel1->Controls->Add(this->textBox7_0);
			this->panel1->Controls->Add(this->textBox6_0);
			this->panel1->Controls->Add(this->textBox7_9);
			this->panel1->Controls->Add(this->textBox6_9);
			this->panel1->Controls->Add(this->textBox7_8);
			this->panel1->Controls->Add(this->textBox6_8);
			this->panel1->Controls->Add(this->textBox6_7);
			this->panel1->Controls->Add(this->textBox7_6);
			this->panel1->Controls->Add(this->textBox7_5);
			this->panel1->Controls->Add(this->textBox6_5);
			this->panel1->Controls->Add(this->textBox7_4);
			this->panel1->Controls->Add(this->textBox6_4);
			this->panel1->Controls->Add(this->textBox7_3);
			this->panel1->Controls->Add(this->textBox6_3);
			this->panel1->Controls->Add(this->textBox7_2);
			this->panel1->Controls->Add(this->textBox6_2);
			this->panel1->Controls->Add(this->textBox7_1);
			this->panel1->Controls->Add(this->textBox6_1);
			this->panel1->Controls->Add(this->textBox5_0);
			this->panel1->Controls->Add(this->textBox4_0);
			this->panel1->Controls->Add(this->textBox5_9);
			this->panel1->Controls->Add(this->textBox4_9);
			this->panel1->Controls->Add(this->textBox5_8);
			this->panel1->Controls->Add(this->textBox4_8);
			this->panel1->Controls->Add(this->textBox5_7);
			this->panel1->Controls->Add(this->textBox4_7);
			this->panel1->Controls->Add(this->textBox5_6);
			this->panel1->Controls->Add(this->textBox4_6);
			this->panel1->Controls->Add(this->textBox4_5);
			this->panel1->Controls->Add(this->textBox5_4);
			this->panel1->Controls->Add(this->textBox5_3);
			this->panel1->Controls->Add(this->textBox4_3);
			this->panel1->Controls->Add(this->textBox5_2);
			this->panel1->Controls->Add(this->textBox4_2);
			this->panel1->Controls->Add(this->textBox5_1);
			this->panel1->Controls->Add(this->textBox4_1);
			this->panel1->Controls->Add(this->textBox3_0);
			this->panel1->Controls->Add(this->textBox2_0);
			this->panel1->Controls->Add(this->textBox3_9);
			this->panel1->Controls->Add(this->textBox2_9);
			this->panel1->Controls->Add(this->textBox3_8);
			this->panel1->Controls->Add(this->textBox2_8);
			this->panel1->Controls->Add(this->textBox3_7);
			this->panel1->Controls->Add(this->textBox2_7);
			this->panel1->Controls->Add(this->textBox3_6);
			this->panel1->Controls->Add(this->textBox2_6);
			this->panel1->Controls->Add(this->textBox3_5);
			this->panel1->Controls->Add(this->textBox2_5);
			this->panel1->Controls->Add(this->textBox3_4);
			this->panel1->Controls->Add(this->textBox2_4);
			this->panel1->Controls->Add(this->textBox2_3);
			this->panel1->Controls->Add(this->textBox3_2);
			this->panel1->Controls->Add(this->textBox3_1);
			this->panel1->Controls->Add(this->textBox2_1);
			this->panel1->Controls->Add(this->textBox1_0);
			this->panel1->Controls->Add(this->textBox1_9);
			this->panel1->Controls->Add(this->textBox0_9);
			this->panel1->Controls->Add(this->textBox1_8);
			this->panel1->Controls->Add(this->textBox0_8);
			this->panel1->Controls->Add(this->textBox1_7);
			this->panel1->Controls->Add(this->textBox0_7);
			this->panel1->Controls->Add(this->textBox1_6);
			this->panel1->Controls->Add(this->textBox0_6);
			this->panel1->Controls->Add(this->textBox1_5);
			this->panel1->Controls->Add(this->textBox0_5);
			this->panel1->Controls->Add(this->textBox1_4);
			this->panel1->Controls->Add(this->textBox0_4);
			this->panel1->Controls->Add(this->textBox1_3);
			this->panel1->Controls->Add(this->textBox0_3);
			this->panel1->Controls->Add(this->textBox1_2);
			this->panel1->Controls->Add(this->textBox0_2);
			this->panel1->Controls->Add(this->textBox0_1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(849, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(795, 614);
			this->panel1->TabIndex = 147;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label44->Location = System::Drawing::Point(222, 11);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(149, 45);
			this->label44->TabIndex = 148;
			this->label44->Text = L"Данные";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1640, 590);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"OpenGL C++";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UNREFERENCED_PARAMETER(sender);
		UNREFERENCED_PARAMETER(e);
		
		label32->Visible = false;
		label33->Visible = false;
		label34->Visible = false;
		label35->Visible = false;
		label36->Visible = false;
		label37->Visible = false;
		label38->Visible = false;
		label39->Visible = false;
		label40->Visible = false;
		label41->Visible = false;
		int x0 = 310;
		int y0 = 230;
		int x1, y1;
		INT16 count = System::Int16::Parse(this->textBox1->Text);
		int r = 185;
		float twice_pi = 6.28;

		for (int i = 0; i < count; ++i) {
			x1 = (r * cos((float)i * -twice_pi / (float)count));
			y1 = (r * sin((float)i * -twice_pi / (float)count));
			switch (i){
			case 0: {
				this->label32->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label32->Visible = true;
			}break;
			case 1: {
				this->label33->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label33->Visible = true;
			}break;
			case 2: {
				this->label34->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label34->Visible = true;
			}break;
			case 3: {
				this->label35->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label35->Visible = true;
			}break;
			case 4: {
				this->label36->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label36->Visible = true;
			}break;
			case 5: {
				this->label37->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label37->Visible = true;
			}break;
			case 6: {
				this->label38->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label38->Visible = true;
			}break;
			case 7: {
				this->label39->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label39->Visible = true;
			}break;
			case 8: {
				this->label40->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label40->Visible = true;
			}break;
			case 9: {
				this->label41->Location = System::Drawing::Point(x1 + x0, y1 + y0);
				label41->Visible = true;
			}break;

			}
		}
		
		OpenGL->get_data(&test);
		OpenGL->Render();
		OpenGL->SwapOpenGLBuffers();
		
	}


///////////////////////////////

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text != "") {
			INT16 count = System::Int16::Parse(this->textBox1->Text);
			if (count <= 10 && count >= 1) {
				test.change_count(count);
				button1->Visible = true;
				button2->Visible = true;
				{
					textBox0_1->Text = "";
					textBox1_0->Text = "";
					 //1

					textBox2_0->Text = "";
					textBox2_1->Text = "";
					textBox0_2->Text = "";
					textBox1_2->Text = "";
					 //2

					textBox3_0->Text = "";
					textBox3_1->Text = "";
					textBox3_2->Text = "";
					
					textBox0_3->Text = "";
					textBox1_3->Text = "";
					textBox2_3->Text = "";
					//3

					textBox4_0->Text = "";
					textBox4_1->Text = "";
					textBox4_2->Text = "";
					textBox4_3->Text = "";
					
					textBox0_4->Text = "";
					textBox1_4->Text = "";
					textBox2_4->Text = "";
					textBox3_4->Text = "";
					  //4

					textBox5_0->Text = "";
					textBox5_1->Text = "";
					textBox5_2->Text = "";
					textBox5_3->Text = "";
					textBox5_4->Text = "";
					
					textBox0_5->Text = "";
					textBox1_5->Text = "";
					textBox2_5->Text = "";
					textBox3_5->Text = "";
					textBox4_5->Text = "";
					 //5

					textBox6_0->Text = "";
					textBox6_1->Text = "";
					textBox6_2->Text = "";
					textBox6_3->Text = "";
					textBox6_4->Text = "";
					textBox6_5->Text = "";
					
					textBox0_6->Text = "";
					textBox1_6->Text = "";
					textBox2_6->Text = "";
					textBox3_6->Text = "";
					textBox4_6->Text = "";
					textBox5_6->Text = "";
					  //6

					textBox7_0->Text = "";
					textBox7_1->Text = "";
					textBox7_2->Text = "";
					textBox7_3->Text = "";
					textBox7_4->Text = "";
					textBox7_5->Text = "";
					textBox7_6->Text = "";
				
					textBox0_7->Text = "";
					textBox1_7->Text = "";
					textBox2_7->Text = "";
					textBox3_7->Text = "";
					textBox4_7->Text = "";
					textBox5_7->Text = "";
					textBox6_7->Text = "";
					 //7

					textBox8_0->Text = "";
					textBox8_1->Text = "";
					textBox8_2->Text = "";
					textBox8_3->Text = "";
					textBox8_4->Text = "";
					textBox8_5->Text = "";
					textBox8_6->Text = "";
					textBox8_7->Text = "";
					
					textBox0_8->Text = "";
					textBox1_8->Text = "";
					textBox2_8->Text = "";
					textBox3_8->Text = "";
					textBox4_8->Text = "";
					textBox5_8->Text = "";
					textBox6_8->Text = "";
					textBox7_8->Text = "";
					//8

					textBox9_0->Text = "";
					textBox9_1->Text = "";
					textBox9_2->Text = "";
					textBox9_3->Text = "";
					textBox9_4->Text = "";
					textBox9_5->Text = "";
					textBox9_6->Text = "";
					textBox9_7->Text = "";
					textBox9_8->Text = "";
					
					textBox0_9->Text = "";
					textBox1_9->Text = "";
					textBox2_9->Text = "";
					textBox3_9->Text = "";
					textBox4_9->Text = "";
					textBox5_9->Text = "";
					textBox6_9->Text = "";
					textBox7_9->Text = "";
					textBox8_9->Text = "";
					  //9
				}
				switch (count)
				{
				case 0:
				{}
				case 1: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = false;
					textBox1_0->Visible = false;
					label22->Visible = false;
					label3->Visible = false;
					label12->Visible = false; //1

					textBox2_0->Visible = false;
					textBox2_1->Visible = false;
					textBox0_2->Visible = false;
					textBox1_2->Visible = false;
					label23->Visible = false;
					label4->Visible = false;
					label14->Visible = false; //2

					textBox3_0->Visible = false;
					textBox3_1->Visible = false;
					textBox3_2->Visible = false;
					label24->Visible = false;
					textBox0_3->Visible = false;
					textBox1_3->Visible = false;
					textBox2_3->Visible = false;
					label13->Visible = false;
					label7->Visible = false;  //3

					textBox4_0->Visible = false;
					textBox4_1->Visible = false;
					textBox4_2->Visible = false;
					textBox4_3->Visible = false;
					label25->Visible = false;
					textBox0_4->Visible = false;
					textBox1_4->Visible = false;
					textBox2_4->Visible = false;
					textBox3_4->Visible = false;
					label18->Visible = false;
					label6->Visible = false;  //4

					textBox5_0->Visible = false;
					textBox5_1->Visible = false;
					textBox5_2->Visible = false;
					textBox5_3->Visible = false;
					textBox5_4->Visible = false;
					label26->Visible = false;
					textBox0_5->Visible = false;
					textBox1_5->Visible = false;
					textBox2_5->Visible = false;
					textBox3_5->Visible = false;
					textBox4_5->Visible = false;
					label17->Visible = false;
					label5->Visible = false; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 2: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = false;
					textBox2_1->Visible = false;
					textBox0_2->Visible = false;
					textBox1_2->Visible = false;
					label23->Visible = false;
					label4->Visible = false;
					label14->Visible = false; //2

					textBox3_0->Visible = false;
					textBox3_1->Visible = false;
					textBox3_2->Visible = false;
					label24->Visible = false;
					textBox0_3->Visible = false;
					textBox1_3->Visible = false;
					textBox2_3->Visible = false;
					label13->Visible = false;
					label7->Visible = false;  //3

					textBox4_0->Visible = false;
					textBox4_1->Visible = false;
					textBox4_2->Visible = false;
					textBox4_3->Visible = false;
					label25->Visible = false;
					textBox0_4->Visible = false;
					textBox1_4->Visible = false;
					textBox2_4->Visible = false;
					textBox3_4->Visible = false;
					label18->Visible = false;
					label6->Visible = false;  //4

					textBox5_0->Visible = false;
					textBox5_1->Visible = false;
					textBox5_2->Visible = false;
					textBox5_3->Visible = false;
					textBox5_4->Visible = false;
					label26->Visible = false;
					textBox0_5->Visible = false;
					textBox1_5->Visible = false;
					textBox2_5->Visible = false;
					textBox3_5->Visible = false;
					textBox4_5->Visible = false;
					label17->Visible = false;
					label5->Visible = false; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 3: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = false;
					textBox3_1->Visible = false;
					textBox3_2->Visible = false;
					label24->Visible = false;
					textBox0_3->Visible = false;
					textBox1_3->Visible = false;
					textBox2_3->Visible = false;
					label13->Visible = false;
					label7->Visible = false;  //3

					textBox4_0->Visible = false;
					textBox4_1->Visible = false;
					textBox4_2->Visible = false;
					textBox4_3->Visible = false;
					label25->Visible = false;
					textBox0_4->Visible = false;
					textBox1_4->Visible = false;
					textBox2_4->Visible = false;
					textBox3_4->Visible = false;
					label18->Visible = false;
					label6->Visible = false;  //4

					textBox5_0->Visible = false;
					textBox5_1->Visible = false;
					textBox5_2->Visible = false;
					textBox5_3->Visible = false;
					textBox5_4->Visible = false;
					label26->Visible = false;
					textBox0_5->Visible = false;
					textBox1_5->Visible = false;
					textBox2_5->Visible = false;
					textBox3_5->Visible = false;
					textBox4_5->Visible = false;
					label17->Visible = false;
					label5->Visible = false; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 4: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = false;
					textBox4_1->Visible = false;
					textBox4_2->Visible = false;
					textBox4_3->Visible = false;
					label25->Visible = false;
					textBox0_4->Visible = false;
					textBox1_4->Visible = false;
					textBox2_4->Visible = false;
					textBox3_4->Visible = false;
					label18->Visible = false;
					label6->Visible = false;  //4

					textBox5_0->Visible = false;
					textBox5_1->Visible = false;
					textBox5_2->Visible = false;
					textBox5_3->Visible = false;
					textBox5_4->Visible = false;
					label26->Visible = false;
					textBox0_5->Visible = false;
					textBox1_5->Visible = false;
					textBox2_5->Visible = false;
					textBox3_5->Visible = false;
					textBox4_5->Visible = false;
					label17->Visible = false;
					label5->Visible = false; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 5: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = false;
					textBox5_1->Visible = false;
					textBox5_2->Visible = false;
					textBox5_3->Visible = false;
					textBox5_4->Visible = false;
					label26->Visible = false;
					textBox0_5->Visible = false;
					textBox1_5->Visible = false;
					textBox2_5->Visible = false;
					textBox3_5->Visible = false;
					textBox4_5->Visible = false;
					label17->Visible = false;
					label5->Visible = false; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 6: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = true;
					textBox5_1->Visible = true;
					textBox5_2->Visible = true;
					textBox5_3->Visible = true;
					textBox5_4->Visible = true;
					label26->Visible = true;
					textBox0_5->Visible = true;
					textBox1_5->Visible = true;
					textBox2_5->Visible = true;
					textBox3_5->Visible = true;
					textBox4_5->Visible = true;
					label17->Visible = true;
					label5->Visible = true; //5

					textBox6_0->Visible = false;
					textBox6_1->Visible = false;
					textBox6_2->Visible = false;
					textBox6_3->Visible = false;
					textBox6_4->Visible = false;
					textBox6_5->Visible = false;
					label27->Visible = false;
					textBox0_6->Visible = false;
					textBox1_6->Visible = false;
					textBox2_6->Visible = false;
					textBox3_6->Visible = false;
					textBox4_6->Visible = false;
					textBox5_6->Visible = false;
					label16->Visible = false;
					label10->Visible = false;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 7: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = true;
					textBox5_1->Visible = true;
					textBox5_2->Visible = true;
					textBox5_3->Visible = true;
					textBox5_4->Visible = true;
					label26->Visible = true;
					textBox0_5->Visible = true;
					textBox1_5->Visible = true;
					textBox2_5->Visible = true;
					textBox3_5->Visible = true;
					textBox4_5->Visible = true;
					label17->Visible = true;
					label5->Visible = true; //5

					textBox6_0->Visible = true;
					textBox6_1->Visible = true;
					textBox6_2->Visible = true;
					textBox6_3->Visible = true;
					textBox6_4->Visible = true;
					textBox6_5->Visible = true;
					label27->Visible = true;
					textBox0_6->Visible = true;
					textBox1_6->Visible = true;
					textBox2_6->Visible = true;
					textBox3_6->Visible = true;
					textBox4_6->Visible = true;
					textBox5_6->Visible = true;
					label16->Visible = true;
					label10->Visible = true;  //6

					textBox7_0->Visible = false;
					textBox7_1->Visible = false;
					textBox7_2->Visible = false;
					textBox7_3->Visible = false;
					textBox7_4->Visible = false;
					textBox7_5->Visible = false;
					textBox7_6->Visible = false;
					label28->Visible = false;
					textBox0_7->Visible = false;
					textBox1_7->Visible = false;
					textBox2_7->Visible = false;
					textBox3_7->Visible = false;
					textBox4_7->Visible = false;
					textBox5_7->Visible = false;
					textBox6_7->Visible = false;
					label15->Visible = false;
					label9->Visible = false; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 8: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = true;
					textBox5_1->Visible = true;
					textBox5_2->Visible = true;
					textBox5_3->Visible = true;
					textBox5_4->Visible = true;
					label26->Visible = true;
					textBox0_5->Visible = true;
					textBox1_5->Visible = true;
					textBox2_5->Visible = true;
					textBox3_5->Visible = true;
					textBox4_5->Visible = true;
					label17->Visible = true;
					label5->Visible = true; //5

					textBox6_0->Visible = true;
					textBox6_1->Visible = true;
					textBox6_2->Visible = true;
					textBox6_3->Visible = true;
					textBox6_4->Visible = true;
					textBox6_5->Visible = true;
					label27->Visible = true;
					textBox0_6->Visible = true;
					textBox1_6->Visible = true;
					textBox2_6->Visible = true;
					textBox3_6->Visible = true;
					textBox4_6->Visible = true;
					textBox5_6->Visible = true;
					label16->Visible = true;
					label10->Visible = true;  //6

					textBox7_0->Visible = true;
					textBox7_1->Visible = true;
					textBox7_2->Visible = true;
					textBox7_3->Visible = true;
					textBox7_4->Visible = true;
					textBox7_5->Visible = true;
					textBox7_6->Visible = true;
					label28->Visible = true;
					textBox0_7->Visible = true;
					textBox1_7->Visible = true;
					textBox2_7->Visible = true;
					textBox3_7->Visible = true;
					textBox4_7->Visible = true;
					textBox5_7->Visible = true;
					textBox6_7->Visible = true;
					label15->Visible = true;
					label9->Visible = true; //7

					textBox8_0->Visible = false;
					textBox8_1->Visible = false;
					textBox8_2->Visible = false;
					textBox8_3->Visible = false;
					textBox8_4->Visible = false;
					textBox8_5->Visible = false;
					textBox8_6->Visible = false;
					textBox8_7->Visible = false;
					label29->Visible = false;
					textBox0_8->Visible = false;
					textBox1_8->Visible = false;
					textBox2_8->Visible = false;
					textBox3_8->Visible = false;
					textBox4_8->Visible = false;
					textBox5_8->Visible = false;
					textBox6_8->Visible = false;
					textBox7_8->Visible = false;
					label19->Visible = false;
					label8->Visible = false;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 9: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = true;
					textBox5_1->Visible = true;
					textBox5_2->Visible = true;
					textBox5_3->Visible = true;
					textBox5_4->Visible = true;
					label26->Visible = true;
					textBox0_5->Visible = true;
					textBox1_5->Visible = true;
					textBox2_5->Visible = true;
					textBox3_5->Visible = true;
					textBox4_5->Visible = true;
					label17->Visible = true;
					label5->Visible = true; //5

					textBox6_0->Visible = true;
					textBox6_1->Visible = true;
					textBox6_2->Visible = true;
					textBox6_3->Visible = true;
					textBox6_4->Visible = true;
					textBox6_5->Visible = true;
					label27->Visible = true;
					textBox0_6->Visible = true;
					textBox1_6->Visible = true;
					textBox2_6->Visible = true;
					textBox3_6->Visible = true;
					textBox4_6->Visible = true;
					textBox5_6->Visible = true;
					label16->Visible = true;
					label10->Visible = true;  //6

					textBox7_0->Visible = true;
					textBox7_1->Visible = true;
					textBox7_2->Visible = true;
					textBox7_3->Visible = true;
					textBox7_4->Visible = true;
					textBox7_5->Visible = true;
					textBox7_6->Visible = true;
					label28->Visible = true;
					textBox0_7->Visible = true;
					textBox1_7->Visible = true;
					textBox2_7->Visible = true;
					textBox3_7->Visible = true;
					textBox4_7->Visible = true;
					textBox5_7->Visible = true;
					textBox6_7->Visible = true;
					label15->Visible = true;
					label9->Visible = true; //7

					textBox8_0->Visible = true;
					textBox8_1->Visible = true;
					textBox8_2->Visible = true;
					textBox8_3->Visible = true;
					textBox8_4->Visible = true;
					textBox8_5->Visible = true;
					textBox8_6->Visible = true;
					textBox8_7->Visible = true;
					label29->Visible = true;
					textBox0_8->Visible = true;
					textBox1_8->Visible = true;
					textBox2_8->Visible = true;
					textBox3_8->Visible = true;
					textBox4_8->Visible = true;
					textBox5_8->Visible = true;
					textBox6_8->Visible = true;
					textBox7_8->Visible = true;
					label19->Visible = true;
					label8->Visible = true;  //8

					textBox9_0->Visible = false;
					textBox9_1->Visible = false;
					textBox9_2->Visible = false;
					textBox9_3->Visible = false;
					textBox9_4->Visible = false;
					textBox9_5->Visible = false;
					textBox9_6->Visible = false;
					textBox9_7->Visible = false;
					textBox9_8->Visible = false;
					label30->Visible = false;
					textBox0_9->Visible = false;
					textBox1_9->Visible = false;
					textBox2_9->Visible = false;
					textBox3_9->Visible = false;
					textBox4_9->Visible = false;
					textBox5_9->Visible = false;
					textBox6_9->Visible = false;
					textBox7_9->Visible = false;
					textBox8_9->Visible = false;
					label20->Visible = false;
					label11->Visible = false;  //9

					break;
				}
				case 10: {
					label1->Visible = true;
					label2->Visible = true;
					label21->Visible = true; //0

					textBox0_1->Visible = true;
					textBox1_0->Visible = true;
					label22->Visible = true;
					label3->Visible = true;
					label12->Visible = true; //1

					textBox2_0->Visible = true;
					textBox2_1->Visible = true;
					textBox0_2->Visible = true;
					textBox1_2->Visible = true;
					label23->Visible = true;
					label4->Visible = true;
					label14->Visible = true; //2

					textBox3_0->Visible = true;
					textBox3_1->Visible = true;
					textBox3_2->Visible = true;
					label24->Visible = true;
					textBox0_3->Visible = true;
					textBox1_3->Visible = true;
					textBox2_3->Visible = true;
					label13->Visible = true;
					label7->Visible = true;  //3

					textBox4_0->Visible = true;
					textBox4_1->Visible = true;
					textBox4_2->Visible = true;
					textBox4_3->Visible = true;
					label25->Visible = true;
					textBox0_4->Visible = true;
					textBox1_4->Visible = true;
					textBox2_4->Visible = true;
					textBox3_4->Visible = true;
					label18->Visible = true;
					label6->Visible = true;  //4

					textBox5_0->Visible = true;
					textBox5_1->Visible = true;
					textBox5_2->Visible = true;
					textBox5_3->Visible = true;
					textBox5_4->Visible = true;
					label26->Visible = true;
					textBox0_5->Visible = true;
					textBox1_5->Visible = true;
					textBox2_5->Visible = true;
					textBox3_5->Visible = true;
					textBox4_5->Visible = true;
					label17->Visible = true;
					label5->Visible = true; //5

					textBox6_0->Visible = true;
					textBox6_1->Visible = true;
					textBox6_2->Visible = true;
					textBox6_3->Visible = true;
					textBox6_4->Visible = true;
					textBox6_5->Visible = true;
					label27->Visible = true;
					textBox0_6->Visible = true;
					textBox1_6->Visible = true;
					textBox2_6->Visible = true;
					textBox3_6->Visible = true;
					textBox4_6->Visible = true;
					textBox5_6->Visible = true;
					label16->Visible = true;
					label10->Visible = true;  //6

					textBox7_0->Visible = true;
					textBox7_1->Visible = true;
					textBox7_2->Visible = true;
					textBox7_3->Visible = true;
					textBox7_4->Visible = true;
					textBox7_5->Visible = true;
					textBox7_6->Visible = true;
					label28->Visible = true;
					textBox0_7->Visible = true;
					textBox1_7->Visible = true;
					textBox2_7->Visible = true;
					textBox3_7->Visible = true;
					textBox4_7->Visible = true;
					textBox5_7->Visible = true;
					textBox6_7->Visible = true;
					label15->Visible = true;
					label9->Visible = true; //7

					textBox8_0->Visible = true;
					textBox8_1->Visible = true;
					textBox8_2->Visible = true;
					textBox8_3->Visible = true;
					textBox8_4->Visible = true;
					textBox8_5->Visible = true;
					textBox8_6->Visible = true;
					textBox8_7->Visible = true;
					label29->Visible = true;
					textBox0_8->Visible = true;
					textBox1_8->Visible = true;
					textBox2_8->Visible = true;
					textBox3_8->Visible = true;
					textBox4_8->Visible = true;
					textBox5_8->Visible = true;
					textBox6_8->Visible = true;
					textBox7_8->Visible = true;
					label19->Visible = true;
					label8->Visible = true;  //8

					textBox9_0->Visible = true;
					textBox9_1->Visible = true;
					textBox9_2->Visible = true;
					textBox9_3->Visible = true;
					textBox9_4->Visible = true;
					textBox9_5->Visible = true;
					textBox9_6->Visible = true;
					textBox9_7->Visible = true;
					textBox9_8->Visible = true;
					label30->Visible = true;
					textBox0_9->Visible = true;
					textBox1_9->Visible = true;
					textBox2_9->Visible = true;
					textBox3_9->Visible = true;
					textBox4_9->Visible = true;
					textBox5_9->Visible = true;
					textBox6_9->Visible = true;
					textBox7_9->Visible = true;
					textBox8_9->Visible = true;
					label20->Visible = true;
					label11->Visible = true;  //9

					break;
				}
				default:
					break;
				}
			}
else{
			button1->Visible = false;
			button2->Visible = false;
			textBox1->Text = "";
}
		}
		else {
		button1->Visible = false;
		button2->Visible = false;
}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox0_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_1->Text != "") {
			INT16 weight = System::Int16::Parse(this->textBox0_1->Text);
			test.add_track(0, 1, weight);

			
		}
}

private: System::Void textBox1_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_0->Text);

		test.add_track(1, 0, weight);

	}
}
private: System::Void textBox0_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_2->Text);
		test.add_track(0, 2, weight);
		

	}
}
private: System::Void textBox2_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_0->Text);
		test.add_track(2, 0, weight);
	}
}
private: System::Void textBox0_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_3->Text);
		test.add_track(0, 3, weight);

	}
}
private: System::Void textBox3_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_0->Text);
		test.add_track(3, 0, weight);
	

	}
}
private: System::Void textBox0_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_4->Text);
		test.add_track(0, 4, weight);


	}
}

private: System::Void textBox4_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_0->Text);
		
		test.add_track(4, 0, weight);
	

	}
}
private: System::Void textBox0_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_5->Text);
		test.add_track(0, 5, weight);
		//eight.ToString();

	}
}
private: System::Void textBox5_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_0->Text);
		test.add_track(5, 0, weight);
		//eight.ToString();

	}
}
private: System::Void textBox0_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_6->Text);
		test.add_track(0, 6, weight);
		//eight.ToString();

	}
}
private: System::Void textBox6_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_0->Text);
		
		test.add_track(6, 0, weight);
		//eight.ToString();

	}
}
private: System::Void textBox0_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_7->Text);
		test.add_track(0, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_0->Text);
		
		test.add_track(7, 0, weight);
		//eight.ToString();

	}
}
private: System::Void textBox0_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_8->Text);
		test.add_track(0, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_0->Text);

		test.add_track(8, 0, weight);
		//eight.ToString();

	}
}
private: System::Void textBox0_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox0_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox0_9->Text);
		test.add_track(0, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_0->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_0->Text);
		
		test.add_track(9, 0, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_2->Text);
		test.add_track(1, 2, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox2_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_1->Text);
		
		test.add_track(2, 1, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_3->Text);
		test.add_track(1, 3, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox3_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_1->Text);
		
		test.add_track(3, 1, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_4->Text);
		test.add_track(1, 4, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox4_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_1->Text);
		
		test.add_track(4, 1, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_5->Text);
		test.add_track(1, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_1->Text);
		
		test.add_track(5, 1, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_6->Text);
		test.add_track(1, 6, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox6_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_1->Text);
		
		test.add_track(6, 1, weight);
		//eight.ToString();

	}

}
private: System::Void textBox1_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_7->Text);
		test.add_track(1, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_1->Text);
		
		test.add_track(7, 1, weight);
		//eight.ToString();

	}
}
private: System::Void textBox1_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_8->Text);
		test.add_track(1, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_1->Text);
		
		test.add_track(8, 1, weight);
		//eight.ToString();

	}

}
private: System::Void textBox1_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox1_9->Text);
		test.add_track(1, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_1->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_1->Text);
		
		test.add_track(9, 1, weight);
		//eight.ToString();

	}

}
private: System::Void textBox2_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_3->Text);
		test.add_track(2, 3, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox3_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_2->Text);
		
		test.add_track(3, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_4->Text);
		test.add_track(2, 4, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox4_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_2->Text);
		
		test.add_track(4, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_5->Text);
		test.add_track(2, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_2->Text);
		
		test.add_track(5, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_6->Text);
		test.add_track(2, 6, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox6_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_2->Text);
		
		test.add_track(6, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_7->Text);
		test.add_track(2, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_2->Text);
		
		test.add_track(7, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_8->Text);
		test.add_track(2, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_2->Text);
		
		test.add_track(8, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox2_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox2_9->Text);
		test.add_track(2, 9, weight);
		

	}
}
private: System::Void textBox9_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_2->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_2->Text);
		
		test.add_track(9, 2, weight);
		//eight.ToString();

	}
}
private: System::Void textBox3_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_4->Text);
		test.add_track(3, 4, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox4_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_3->Text);
		
		test.add_track(4, 3, weight);
		//eight.ToString();

	}
}
private: System::Void textBox3_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_5->Text);
		test.add_track(3, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_3->Text);
		test.add_track(5, 3, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox3_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_6->Text);
		test.add_track(3, 6, weight);
		
		//eight.ToString();

	}

}
private: System::Void textBox6_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_3->Text);
		test.add_track(6, 3, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox3_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_7->Text);
		test.add_track(3, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_3->Text);
		test.add_track(7, 3, weight);

		//eight.ToString();

	}
}
private: System::Void textBox3_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_8->Text);
		test.add_track(3, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_3->Text);
		test.add_track(8, 3, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox3_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox3_8->Text);
		test.add_track(3, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_3->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_3->Text);
		test.add_track(9, 3, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox4_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_5->Text);
		test.add_track(4, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_4->Text);
		
		test.add_track(5, 4, weight);
		//eight.ToString();

	}
}
private: System::Void textBox4_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_6->Text);
		test.add_track(4, 6, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox6_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_4->Text);
		
		test.add_track(6, 4, weight);
		//eight.ToString();

	}
}
private: System::Void textBox4_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_7->Text);
		test.add_track(4, 7, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox7_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_4->Text);
		
		test.add_track(7, 4, weight);
		//eight.ToString();

	}
}
private: System::Void textBox4_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_8->Text);
		test.add_track(4, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_4->Text);
		
		test.add_track(8, 4, weight);
		//eight.ToString();

	}
}
private: System::Void textBox4_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox4_9->Text);
		test.add_track(4, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_4->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_4->Text);
		
		test.add_track(9, 4, weight);
		//eight.ToString();

	}
}
private: System::Void textBox5_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_6->Text);
		test.add_track(5, 6, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox6_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_5->Text);
		test.add_track(6, 5, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox5_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_7->Text);
		test.add_track(5, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_5->Text);
		test.add_track(7, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_8->Text);
		test.add_track(5, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_5->Text);
		test.add_track(8, 5, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox5_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox5_9->Text);
		test.add_track(5, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_5->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_5->Text);
		test.add_track(9, 5, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox6_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_7->Text);
		test.add_track(6, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_6->Text);
		test.add_track(7, 6, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox6_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_8->Text);
		test.add_track(6, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_6->Text);
		test.add_track(8, 6, weight);
	
		//eight.ToString();

	}
}
private: System::Void textBox6_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox6_9->Text);
		test.add_track(6, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_6->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_6->Text);
		test.add_track(9, 6, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox7_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_8->Text);
		test.add_track(7, 8, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_7->Text);
		test.add_track(8, 7, weight);
		
		//eight.ToString();

	}

}
private: System::Void textBox7_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox7_9->Text);
		test.add_track(7, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_7->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_7->Text);
		test.add_track(9, 7, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox8_9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8_9->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox8_9->Text);
		test.add_track(8, 9, weight);
		
		//eight.ToString();

	}
}
private: System::Void textBox9_8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9_8->Text != "") {
		INT16 weight = System::Int16::Parse(this->textBox9_8->Text);
		test.add_track(9, 8, weight);
	
		//eight.ToString();

	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	INT16 count = System::Int16::Parse(this->textBox1->Text);

	int* sol = new int[count];
	sol = test.Kommivoyazher();

	int j = 0;
	label43->Text = " ";

	for (int i = 0; i < count; i++) {

		j = sol[i];
		label43->Text += i.ToString();
		label43->Text += " -> ";
		label43->Text += j.ToString();
		label43->Text += "; ";
	}
	label43->Text += "\n ";

	int temp = 0;
	for (int l = 0; l < count;)
	{
		for (int i = 0, j = 0; i < count; i++)
		{
			if (temp == 0 || i + 1 == temp)
			{
				if (temp == 0) {
					label43->Text += i.ToString();
				}
				j = sol[i];
				temp = j + 1;

				if (temp > 0) {
					label43->Text += "-->";
					label43->Text += (temp - 1).ToString();
				}
				l++;
			}
		}
	}
	label43->Text += "\n Путь составит: ";
	label43->Text += test.s.ToString();
}

};
}

