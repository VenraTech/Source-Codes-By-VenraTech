#include <windows.h>

typedef union _LPRGBQUAD 
{
    COLORREF rgb;
    struct {
        BYTE Red; // red
        BYTE Green; // green
        BYTE Blue; // blue
        BYTE Reserved; // OMG DO NOT USE "Reserved" AT 3 AM!!! (OMG RESERVED MY ASS, NOT CLICKBAIT!!!) /joke
    };
} LRGBQUAD;

int main()
{
    HDC hdcScreen = GetDC(0), hdcMem = CreateCompatibleDC(hdcScreen);
    int w = GetSystemMetrics(0), h = GetSystemMetrics(1);
    BITMAPINFO bmi = { 0 };
    LRGBQUAD* rgbquad;
    bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biWidth = w;
    bmi.bmiHeader.biHeight = h;
    HBITMAP hbmTemp = CreateDIBSection(hdcScreen, &bmi, NULL, (void**)&rgbquad, NULL, NULL);
    SelectObject(hdcMem, hbmTemp);
    for (;;) {
        hdcScreen = GetDC(0);
        BitBlt(hdcMem, 0, 0, w, h, hdcScreen, 0, 0, SRCCOPY);
        for (INT i = 0; i < w * h; i++) {
            INT x = i % w, y = i / w;
            rgbquad[i].rgb += i^y+y*y+i; // replace this with anything
        }
        BitBlt(hdcScreen, 0, 0, w, h, hdcMem, 0, 0, SRCCOPY);
        ReleaseDC(NULL, hdcScreen); DeleteDC(hdcScreen);
    }
}
