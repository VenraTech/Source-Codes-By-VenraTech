#include <windows.h>

int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);

int main()
{
	HDC hdc;
	while (1) {
		hdc = GetDC(NULL);
		BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
