#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    setfillstyle(SOLID_FILL, YELLOW);
    bar(150, 200, 270, 420);
    bar(370, 200, 490, 420);
    bar(150, 200, 490, 270);
    bar(155, 130, 485, 180);
    bar(190, 60, 450, 110);
    setfillstyle(SOLID_FILL, BROWN);
    bar(140, 180, 500, 200);
    bar(135, 420, 285, 450);
    bar(355, 420, 505, 450);
    bar(168, 110, 472, 130);
    bar(230, 40, 410, 60);
    int points[] = {280, 40,
                    360, 40,
                    320, 20};
    setcolor(BROWN);
    fillpoly(3, points);
    getch();
    closegraph();
    return 0;
}