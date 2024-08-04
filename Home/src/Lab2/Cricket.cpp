#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(320, 240, 200, 200);
    fillellipse(320, 240, 180, 180);
    fillellipse(320, 240, 120, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    bar(240, 210, 400, 270);
    getch();
    closegraph();
    return 0;
}
