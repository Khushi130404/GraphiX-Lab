#include <stdio.h>
#include <math.h>
#include <graphics.h>

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
        int pk = 2 * abs(dy) - abs(dx);
        putpixel(xk, yk, GREEN);
        for (int i = 0; i < abs(dx) && xk != x1; i++)
        {
            xk++;
            if (pk < 0)
            {
                pk += 2 * dy;
            }
            else
            {
                pk += 2 * (dy - dx);
                yk++;
            }
            putpixel(xk, yk, GREEN);
        }
    }
    else
    {
        int pk = 2 * dx - dy;
        putpixel(xk, yk, RED);
        for (int i = 0; i < abs(dy) && yk != y1; i++)
        {
            yk++;
            if (pk < 0)
            {
                pk += 2 * dx;
            }
            else
            {
                pk += 2 * (dx - dy);
                xk++;
            }
            putpixel(xk, yk, RED);
        }
    }
    getch();
    closegraph();
    return 0;
}