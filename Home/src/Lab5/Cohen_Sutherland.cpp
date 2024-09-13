#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 85, y1 = 350;
    int x2 = 500, y2 = 65;
    int Xmin = 150, Ymin = 100, Xmax = 500, Ymax = 350;
    line(x1, y1, x2, y2);
    rectangle(Xmin, Ymin, Xmax, Ymax);
    setcolor(RED);
    getch();
    closegraph();
    return 0;
}
