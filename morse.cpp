#include "morse.h"
#include <Windows.h>

using namespace AlphabetMorse2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew morse);
	return 0;
}

