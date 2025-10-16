// main.c

#include "main.h"
#include "glyphs.h"
#include "all_font.h" // Опис шрифтів як структури

int main(void) {
    const int screenWidth = 600;
    const int screenHeight = 240;
    // Ініціалізація графіки, кольорів тощо
    gfx_open(screenWidth,screenHeight,"PSF_Font");
    Display_Set_WIDTH(screenWidth);
    Display_Set_HEIGHT(screenHeight);
    gfx_color(128,127,255);

    int spacing = 2;
    int scale = 1;
    int padding = 5;
    int borderThickness = 1;

    DrawTextScaled(Terminus12x6_font, 20, 10, "Hello Привіт", spacing, scale, GREEN, DrawPixel);
    DrawTextScaled(Terminus12x6_font, 20, 25, "Hello Привіт", spacing, scale * 2, GREEN, DrawPixel);

    DrawTextWithAutoInvertedBackground(Terminus12x6_font, 20, 60, "Hello Привіт", spacing, scale * 3, YELLOW, padding, borderThickness);
    DrawTextWithAutoInvertedBackground(TerminusBold32x16_font, 20, 120, "Hello Привіт", spacing, scale, GREEN, padding, borderThickness);


    while(1) {
        gfx_flush();
        usleep(1000);
    }

    return 0;
}


