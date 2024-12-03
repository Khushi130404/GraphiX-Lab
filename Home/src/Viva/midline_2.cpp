#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x0 = 30, y0 = 50;
    int x1 = 200, y1 = 400;
    int dx = x1 - x0;
    int dy = y1 - y0;
    int xk = x0, yk = y0;
    float m = (float)abs(dy) / abs(dx);
    if (m < 1.0)
    {
        int pk = abs(dy) - (abs(dx) / 2);
        putpixel(xk, yk, RED);
        while (xk != x1 || yk != y1)
        {
            xk++;
            if (pk < 0)
            {
                pk += dy;
            }
            else
            {
                pk += dy - dx;
                yk++;
            }
            putpixel(xk, yk, RED);
        }
    }
    else
    {
        int pk = abs(dx) - (abs(dy) / 2);
        putpixel(xk, yk, GREEN);
        while (xk != x1 || yk != y1)
        {
            yk++;
            if (pk < 0)
            {
                pk += dx;
            }
            else
            {
                pk += dx - dy;
                xk++;
            }
            putpixel(xk, yk, GREEN);
        }
    }
    getch();
    closegraph();
    return 0;
}