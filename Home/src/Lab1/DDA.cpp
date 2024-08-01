#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x0 = 30, y0 = 100;
    int x1 = 400, y1 = 50;
    int dx = x1 - x0;
    int dy = y1 - y0;
    int step = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    float x_inc = (float)dx / step;
    float y_inc = (float)dy / step;
    float x = x0;
    float y = y0;
    for (int i = 0; i < step; i++)
    {
        x += x_inc;
        y += y_inc;
        putpixel(round(x), round(y), RED);
    }
    getch();
    closegraph();
    return 0;
}