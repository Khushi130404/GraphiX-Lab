#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    int x = 100;
    int y = 200;
    int font = 5;
    int direction = 0;
    int font_size = 7;
    settextstyle(font,direction,font_size);
    outtextxy(x,y,"Hello World...!");
    getch();
    closegraph();
    return 0;
}