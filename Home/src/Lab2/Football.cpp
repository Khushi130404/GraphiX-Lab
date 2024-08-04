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
    // setlinestyle(0, 0, 1);
    // line(260, 155, 260, 325);
    // line(380, 155, 380, 325);
    getch();
    closegraph();
    return 0;
}
