#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, WHITE);
    int arr1[] = {200, 200,
                  400, 200,
                  460, 280,
                  200, 260,
                  170, 230,
                  140, 150,
                  170, 150};
    fillpoly(7, arr1);
    getch();
    closegraph();
    return 0;
}