#include <graphics.h>

void drawFace(int, int, int);

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    drawFace(200, 200, 100);
    drawFace(400, 300, 50);
    getch();
    closegraph();
    return 0;
}

void drawFace(int x, int y, int r)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, r, r);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x - r / 2 + 10, y - r / 3, r / 4, r / 4);
    fillellipse(x + r / 2 - 10, y - r / 3, r / 4, r / 4);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - r / 2 + 10, y - r / 3, r / 6 - 3, r / 6 - 3);
    fillellipse(x + r / 2 - 10, y - r / 3, r / 6 - 3, r / 6 - 3);
    setcolor(RED);
    arc(x, y + r / 10, 220, 320, r / 2);
}