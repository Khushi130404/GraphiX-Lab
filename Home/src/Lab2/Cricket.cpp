#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int beige = 20;
    setrgbpalette(beige, 245, 245, 220);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(320, 240, 200, 200);
    fillellipse(320, 240, 180, 180);
    fillellipse(320, 240, 120, 100);
    setfillstyle(SOLID_FILL, beige);
    bar(260, 220, 380, 260);
    getch();
    closegraph();
    return 0;
}
