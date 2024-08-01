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
    float m = (float)dy / dx;
    float c = y0 - m * x0;
    if (x0 < x1)
    {
        while (x0 <= x1)
        {
            putpixel(x0, round(m * x0 + c), GREEN);
            x0++;
        }
    }
    else
    {
        while (x0 >= x1)
        {
            putpixel(x0, round(m * x0 + c), GREEN);
            x0--;
        }
    }
    getch();
    closegraph();
    return 0;
}