#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    pieslice(300,300,0,120,150);
    getch();
    closegraph();
    return 0;
}