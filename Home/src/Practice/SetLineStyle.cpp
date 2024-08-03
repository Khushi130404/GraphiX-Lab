#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    
    int i=200, j=100;

    for(int k=0; k<5; k++)
    {
        setlinestyle(k,0,1);
        line(i,j,i+200,j);
        j+=25;
    }

    getch();
    closegraph();
    return 0;
}