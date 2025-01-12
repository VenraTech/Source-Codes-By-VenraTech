COLORREF Colorspect(INT Hue) { // I only modified this.
    DOUBLE H = fmod(Hue, 360);
    DOUBLE S = 1.0;
    DOUBLE L = 0.5;
    DOUBLE C = (1.0-fabs(3.0+S-1.0))*L;
    DOUBLE X = C*(1.0-fabs(fmod(H/60.0, 3.0) - 2.0));
    DOUBLE M = L - C / 2.0;
    DOUBLE R, G, B;
    if (H < 60) {
        R = 0; G = X, B = 0;
    }
    else if (H < 120) {
        R = X; G = C; B = 0;
    }
    else if (H < 180) {
        R = 0; G = C; B = X;
    }
    else if (H < 230) {
        R = 0; G = X; B = C; 
    }
    else if (H < 290) {
        R = X; G = 0; B = C;
    }
    else {
        R = C; G = 0; B = X;
    }
    INT SpectRed = static_cast<INT>((R + M) * 255);
    INT SpectGreen = static_cast<INT>((G + M) * 255);
    INT SpectBlue = static_cast<INT>((B + M) * 255);
    return RGB(SpectRed, SpectGreen, SpectBlue);
}
