#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x0 = 20, x1 = 150, y0 = 50, y1 = 350;
    int dx = x1 - x0;
    int dy = y1 - y0;
    int step = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    float x_inc = (float)dx / step;
    float y_inc = (float)dy / step;
    float x = x0, y = y0;
    for (int i = 0; i < step; i++)
    {
        putpixel(round(x), round(y), GREEN);
        x += x_inc;
        y += y_inc;
    }
    getch();
    closegraph();
    return 0;
}