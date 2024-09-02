#include <graphics.h>
#include <conio.h>
#include <unistd.h>

void drawCar(int x, int y)
{
    setfillstyle(SOLID_FILL, RED);
    bar(x, y + 10, x + 140, y + 50);
    bar(x + 30, y - 30, x + 110, y + 10);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(x + 40, y - 20, x + 100, y + 10);
    setfillstyle(SOLID_FILL, RED);
    bar(x + 66, y - 20, x + 74, y + 10);
    setfillstyle(SOLID_FILL, BLACK);
    bar(x+69, y+10 , x + 71, y + 50);
    fillellipse(x + 30, y + 60, 25, 25);
    fillellipse(x + 110, y + 60, 25, 25);
    setfillstyle(SOLID_FILL, DARKGRAY);
    fillellipse(x + 30, y + 60, 10, 10);
    fillellipse(x + 110, y + 60, 10, 10);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0, y = 200;
    int maxX = getmaxx();

    while (true)
    {
        cleardevice();
        drawCar(x, y);
        x += 5;
        if (x > maxX)
        {
            x = -100;
        }
        delay(50);
    }

    closegraph();
    return 0;
}
