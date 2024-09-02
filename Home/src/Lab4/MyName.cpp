#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 10);
    outtextxy(80, 200, "KHUSHI");
    getch();
    closegraph();
    return 0;
}
