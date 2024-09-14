#include <stdio.h>
#include <graphics.h>
#include <math.h>

void drawFace(int x, int y, int radius)
{
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, radius, radius);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x - radius / 3, y - radius / 3, radius / 6, radius / 6);
    fillellipse(x + radius / 3, y - radius / 3, radius / 6, radius / 6);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - radius / 3, y - radius / 3, radius / 12, radius / 12);
    fillellipse(x + radius / 3, y - radius / 3, radius / 12, radius / 12);

    setcolor(RED);
    arc(x, y + radius / 4, 200, 340, radius / 3);
}

void scaleFace(int x, int y, int radius, float scaleX, float scaleY)
{
    int newRadiusX = radius * scaleX;
    int newRadiusY = radius * scaleY;

    drawFace(x, y, newRadiusX < newRadiusY ? newRadiusX : newRadiusY);
}

int main()
{
    // Translation & Scaling
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 300, y = 200, radius = 100;
    float sx = 0.5, sy = 0.6;
    int tx = 250, ty = 80;
    drawFace(x, y, radius);
    scaleFace(x + tx, y + ty, radius, sx, sy);

    getch();
    closegraph();
    return 0;
}
