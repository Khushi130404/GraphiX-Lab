#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int xc = 350;
    int yc = 140;
    int r = 80;
    int yk = r;
    int xk = 0;
    int pk = 1 - r;
    while (xk <= yk)
    {
        xk++;
        if (pk < 0)
        {
            pk += 2 * xk + 3;
        }
        else
        {
            yk--;
            pk += 2 * xk - 2 * yk + 5;
        }
        putpixel(xc + xk, yc + yk, GREEN);
        putpixel(xc + yk, yc + xk, RED);
        putpixel(xc - xk, yc + yk, GREEN);
        putpixel(xc - yk, yc + xk, RED);
        putpixel(xc + xk, yc - yk, GREEN);
        putpixel(xc + yk, yc - xk, RED);
        putpixel(xc - xk, yc - yk, GREEN);
        putpixel(xc - yk, yc - xk, RED);
    }
    getch();
    closegraph();
    return 0;
}