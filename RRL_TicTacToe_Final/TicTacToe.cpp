#include "pch.h"
#include "TicTacToe.h"

#include "TicTacToe.h"

[System::STAThread]
int main() {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

	RRLTicTacToeFinal::TicTacToe form;
	System::Windows::Forms::Application::Run(% form);

	return 0;
}