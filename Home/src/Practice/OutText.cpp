#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    outtext("Hello World...!");
    getch();
    closegraph();
    return 0;
}