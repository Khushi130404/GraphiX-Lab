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
                  140, 160,
                  170, 160};
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
    int arr4[] = {315, 199,
                  355, 199,
                  340, 180,
                  310, 180};
    fillpoly(4, arr4);
    int arr5[] = {170, 230,
                  220, 230,
                  145, 265,
                  130, 265};
    fillpoly(4, arr5);
    setfillstyle(SOLID_FILL, DARKGRAY);
    setcolor(DARKGRAY);
    fillellipse(240, 225, 8, 10);
    fillellipse(260, 225, 8, 10);
    fillellipse(280, 225, 8, 10);
    fillellipse(300, 225, 8, 10);
    fillellipse(320, 225, 8, 10);
    fillellipse(340, 225, 8, 10);
    fillellipse(360, 225, 8, 10);
    fillellipse(410, 225, 26, 13);
    getch();
    closegraph();
    return 0;
}