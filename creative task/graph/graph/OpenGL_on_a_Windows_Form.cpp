#include "Form1.h"


using namespace OpenGL_on_a_Windows_Form;

[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
