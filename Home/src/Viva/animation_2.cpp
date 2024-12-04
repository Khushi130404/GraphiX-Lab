#include <graphics.h>
#include <unistd.h>
#include <conio.h>

void drawCar(int);

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    int max = getmaxx();
    int x = -200;
    while (true)
    {
        if (x >= max)
        {
            x = -200;
        }
        drawCar(x);
        x += 5;
        delay(50);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}

void drawCar(int x)
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, RED);
    bar(0 + x, 280, 200 + x, 340);
    bar(40 + x, 230, 160 + x, 280);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(55 + x, 245, 145 + x, 280);
    setfillstyle(SOLID_FILL, RED);
    bar(90 + x, 245, 110 + x, 280);
    line(100 + x, 230, 100 + x, 340);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(40 + x, 350, 35, 35);
    fillellipse(160 + x, 350, 35, 35);
    setfillstyle(SOLID_FILL, DARKGRAY);
    fillellipse(40 + x, 350, 18, 18);
    fillellipse(160 + x, 350, 18, 18);
}