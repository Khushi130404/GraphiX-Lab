#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x0 = 30, y0 = 50;
    int x1 = 400, y1 = 100;
    int dx = x1 - x0;
    int dy = y1 - y0;
    int p0 = 2 * abs(dy) - abs(dx);
    int yk = y0;
    int pk = p0;
    int xk = x0;
    int m = abs(dy) / abs(dx);
    if (m < 1)
    {
        for (int i = 0; i < abs(dx) - 1 && yk != y1; i++)
        {
            xk++;
            if (pk < 0)
            {
                pk += 2 * dy;
            }
            else
            {
                pk += 2 * dy - 2 * dx;
                yk++;
            }
            putpixel(xk, yk, RED);
        }
    }
    else
    {
        for (int i = 0; i < abs(dy) - 1 && xk != x1; i++)
        {
            yk++;
            if (pk < 0)
            {
                pk += 2 * dx;
            }
            else
            {
                pk += 2 * dx - 2 * dy;
                xk++;
            }
            putpixel(xk, yk, RED);
        }
    }
    getch();
    closegraph();
    return 0;
}