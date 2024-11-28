#include <stdio.h>
#include <graphics.h>
#include <math.h>

void drawPlane(int xOffset)
{
    setfillstyle(SOLID_FILL, WHITE);
    int arr1[] = {200 + xOffset, 200, 400 + xOffset, 200, 470 + xOffset, 245, 400 + xOffset, 275,
                  200 + xOffset, 260, 170 + xOffset, 230, 140 + xOffset, 160, 170 + xOffset, 160};
    fillpoly(8, arr1);

    int arr2[] = {300 + xOffset, 240, 360 + xOffset, 240, 280 + xOffset, 300, 250 + xOffset, 300};
    setcolor(BLACK);
    fillpoly(4, arr2);

    setcolor(WHITE);
    fillellipse(420 + xOffset, 250, 50, 25);

    setfillstyle(SOLID_FILL, RED);
    int arr3[] = {270 + xOffset, 275, 313 + xOffset, 275, 280 + xOffset, 300, 250 + xOffset, 300};
    setcolor(RED);
    fillpoly(4, arr3);

    int arr4[] = {315 + xOffset, 199, 355 + xOffset, 199, 340 + xOffset, 180, 310 + xOffset, 180};
    fillpoly(4, arr4);

    int arr5[] = {170 + xOffset, 230, 220 + xOffset, 230, 145 + xOffset, 265, 130 + xOffset, 265};
    fillpoly(4, arr5);

    setfillstyle(SOLID_FILL, DARKGRAY);
    setcolor(DARKGRAY);
    for (int i = 240; i <= 360; i += 20)
    {
        fillellipse(i + xOffset, 225, 8, 10);
    }
    fillellipse(410 + xOffset, 225, 26, 13);

    int arr6[] = {385 + xOffset, 222, 410 + xOffset, 205, 435 + xOffset, 220};
    fillpoly(3, arr6);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int xOffset = -500;
    while (xOffset <= getmaxx())
    {
        cleardevice();
        drawPlane(xOffset);
        xOffset += 5;
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
