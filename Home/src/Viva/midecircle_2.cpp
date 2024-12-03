#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int xc = 100, yc = 200;
    int r = 50;
    int xk = 0, yk = r;
    int pk = 1 - r;
    while (xk <= yk)
    {
        putpixel(xc + xk, yc + yk, RED);
        putpixel(xc - xk, yc + yk, RED);
        putpixel(xc + xk, yc - yk, RED);
        putpixel(xc - xk, yc - yk, RED);
        putpixel(xc + yk, yc + xk, RED);
        putpixel(xc - yk, yc + xk, RED);
        putpixel(xc + yk, yc - xk, RED);
        putpixel(xc - yk, yc - xk, RED);

        xk++;
        if (pk < 0)
        {
            pk += 2 * xk + 3;
        }
        else
        {
            pk += 2 * xk - 2 * yk + 5;
            yk--;
        }
    }
    getch();
    closegraph();
    return 0;
}