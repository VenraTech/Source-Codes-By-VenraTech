int red, green, blue;
bool ifcolorblue = false, ifblue = false;
COLORREF GetUnknownColors(int length) {
    if (red != length) {
        red < length; red++;
        if (ifblue == true) {
            return RGB(red, 255, length);
        }
        else {
            return RGB(red, 255, 255);
        }
    }
    else {
        if (green != length) {
            green < length; green++;
            return RGB(length, green, 255);
        }
        else {
            if (blue != length) {
                blue < length; blue++;
                return RGB(255, length, blue);
            }
            else {
                red = 255; green = 255; blue = 255;
                ifblue = true;
            }
        }
    }
}
