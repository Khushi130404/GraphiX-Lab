#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(320, 240, 200, 200);
    fillellipse(320, 240, 170, 170);
    getch();
    closegraph();
    return 0;
}
