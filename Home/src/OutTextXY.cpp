#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    outtextxy(500,300,"Hello World...!");
    getch();
    closegraph();
    return 0;
}