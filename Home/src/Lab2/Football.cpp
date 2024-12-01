#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, GREEN);
    bar(40, 40, 600, 440);
    rectangle(40, 40, 600, 440);
    line(320, 40, 320, 440);
    rectangle(40, 110, 150, 370);
    rectangle(490, 110, 600, 370);
    circle(320, 240, 60);
    rectangle(40, 160, 70, 320);
    rectangle(570, 160, 600, 320);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(320, 240, 2, 2);
    fillellipse(110, 240, 2, 2);
    fillellipse(530, 240, 2, 2);
    arc(110, 240, 315, 45, 60);
    arc(530, 240, 135, 225, 60);
    getch();
    closegraph();
    return 0;
}
