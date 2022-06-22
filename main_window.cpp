#include "main_window.h"
#include "main.h"
#include "configure_window.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();  
	DatabaseApplication::main_window main_form;
	Application::Run(% main_form);
}