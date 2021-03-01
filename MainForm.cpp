#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	ArrayTask::MainForm form;
	Application::Run(% form);

	return 0;
}

