#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawPlanet(int x, int y, int radius, int color, char name[])
{
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    fillellipse(x, y, radius, radius);
    setcolor(WHITE);
    outtextxy(x - radius - 2, y + radius + 5, name);
}

void drawSolarSystem(int centerX, int centerY)
{
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(centerX, centerY, 50, 50);
    outtextxy(centerX + 60, centerY - 10, "Sun");

    setcolor(WHITE);
    circle(centerX, centerY, 100);
    circle(centerX, centerY, 150);
    circle(centerX, centerY, 200);
    circle(centerX, centerY, 250);
    circle(centerX, centerY, 300);
    circle(centerX, centerY, 350);
    circle(centerX, centerY, 400);
    circle(centerX, centerY, 450);

    drawPlanet(centerX + 100, centerY, 5, LIGHTGRAY, "Mercury");
    drawPlanet(centerX + 150, centerY, 12, LIGHTGREEN, "Venus");
    drawPlanet(centerX + 200, centerY, 15, BLUE, "Earth");
    drawPlanet(centerX + 250, centerY, 10, RED, "Mars");
    drawPlanet(centerX + 300, centerY, 20, BROWN, "Jupiter");
    drawPlanet(centerX + 350, centerY, 18, CYAN, "Saturn");
    drawPlanet(centerX + 400, centerY, 15, LIGHTBLUE, "Uranus");
    drawPlanet(centerX + 450, centerY, 14, BLUE, "Neptune");
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    drawSolarSystem(centerX, centerY);
    getch();
    closegraph();
    return 0;
}
