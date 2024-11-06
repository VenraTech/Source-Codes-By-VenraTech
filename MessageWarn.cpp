#include <windows.h>



int CALLBACK WinMain(
	HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine, int       nCmdShow
)
{
	if (MessageBoxW(NULL, L"You are about to run the test Trojan horse that will overwrite your MBR and make this device unusable.\r\nIf you are seeing this message without knowing what you just executed, just hit No and nothing will happen.\r\nBut, If you are taking a risk, or running it on a virtual machine, hit Yes.\n\nIf you are running this on real hardware, Close the program and delete this file quickly! guy is not responsible for any damages to your device. Or any removal of this disclaimer!!\r\nProceed with running?", L"GDI-Trojan.Win32-idk.exe - Warning #1", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"This is your final chance.\n\nAfter you run the program the system will be destroyed!\n\nStill proceed?", L"GDI-Trojan.Win32-test - Warning #2", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			
}}}
