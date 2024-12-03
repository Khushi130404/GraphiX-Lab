#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x0 = 20, x1 = 75, y0 = 50, y1 = 225;
    int dx = x1 - x0;
    int dy = y1 - y0;
    float m = (float)dy / dx;
    float c = y0 - m * x0;
    while (x0 <= x1)
    {
        putpixel(x0, round(m * x0 + c), RED);
        x0++;
    }
    getch();
    closegraph();
    return 0;
}