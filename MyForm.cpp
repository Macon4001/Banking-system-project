#include "MyForm.h"
//#include "Calculations.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Bankingsystemproject::MyForm frm;
	Application::Run(% frm);
}