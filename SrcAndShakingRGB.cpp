#include <Windows.h>

int main() {
	HDC hdc;
	int sw, sh;
	HBRUSH hb;
	while (1) {
		hdc = GetDC(NULL);
		sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
		hb = CreateSolidBrush(RGB(rand () % 25, rand () % 25, rand () % 25));
		SelectObject(hdc, hb);
		BitBlt(hdc, rand () % 5, rand () % 5, sw, sh, hdc, rand () % 5, rand () % 5, SRCAND);
		PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		DeleteObject(hb);
		ReleaseDC(NULL, hdc);
		Sleep(10);
	}
}
