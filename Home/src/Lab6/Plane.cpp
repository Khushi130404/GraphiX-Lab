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
                  470, 245,
                  400, 275,
                  200, 260,
                  170, 230,
                  140, 150,
                  170, 150};
    fillpoly(8, arr1);
    int arr2[] = {300, 240,
                  360, 240,
                  280, 300,
                  250, 300};
    setcolor(BLACK);
    fillpoly(4, arr2);
    setcolor(WHITE);
    fillellipse(420, 250, 50, 25);
    setfillstyle(SOLID_FILL, RED);
    int arr3[] = {270, 275,
                  313, 275,
                  280, 300,
                  250, 300};
    setcolor(RED);
    fillpoly(4, arr3);
    getch();
    closegraph();
    return 0;
}