#include "FormStartMenu.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Prueba1::FormStartMenu menu;
	Application::Run(%menu);
}

