#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawPlanet(int x, int y, int radius, int color)
{
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
}

void drawSolarSystem(int centerX, int centerY)
{
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(centerX, centerY, 50, 50);

    setcolor(WHITE);
    circle(centerX, centerY, 100);
    circle(centerX, centerY, 150);
    circle(centerX, centerY, 200);
    circle(centerX, centerY, 250);

    drawPlanet(centerX + 100, centerY, 10, LIGHTGRAY);
    drawPlanet(centerX + 150, centerY, 15, GREEN);
    drawPlanet(centerX + 200, centerY, 18, BLUE);
    drawPlanet(centerX + 250, centerY, 12, RED);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    drawSolarSystem(centerX, centerY);
    getch();
    closegraph();
    return 0;
}
