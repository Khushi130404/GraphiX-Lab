#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    for (int i = 0; i < 5; i++)
    {
        setcolor(BLUE);
        circle(160, 210, 60 + i);
        setcolor(YELLOW);
        circle(240, 270, 60 + i);
        setcolor(BLACK);
        circle(320, 210, 60 + i);
        setcolor(GREEN);
        circle(400, 270, 60 + i);
        setcolor(RED);
        circle(480, 210, 60 + i);
    }
    getch();
    closegraph();
    return 0;
}
