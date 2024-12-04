#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, "");
    int x1 = 56, y1 = 117;
    int x2 = 425, y2 = 385;
    int Xmin = 150, Ymin = 100, Xmax = 500, Ymax = 350;
    setcolor(GREEN);
    line(x1, y1, x2, y2);
    rectangle(Xmin, Ymin, Xmax, Ymax);
    setcolor(RED);
    float p[4];
    p[0] = x1 - x2;
    p[1] = x2 - x1;
    p[2] = y1 - y2;
    p[3] = y2 - y1;
    float q[4];
    q[0] = x1 - Xmin;
    q[1] = Xmax - x1;
    q[2] = y1 - Ymin;
    q[3] = Ymax - y1;
    float t1 = 0, t2 = 1;
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == 0)
        {
            printf("Line is Parallel\n");
            for (int j = 0; j < 4; j++)
            {
                if (q[j] < 0)
                {
                    flag = 0;
                    printf("Line is Completely Outside\n");
                    break;
                }
            }
        }
        else
        {
            float t = (float)q[i] / p[i];
            if (p[i] < 0)
            {
                t1 = (t1 < t) ? t : t1;
            }
            else if (p[i] > 0)
            {
                t2 = (t2 > t) ? t : t2;
            }
        }
    }
    if (flag)
    {
        int x = x1, y = y1, xx = x2, yy = y2;
        if (t1 != 0)
        {
            x = x1 + t1 * (x2 - x1);
            y = y1 + t1 * (y2 - y1);
        }
        if (t2 != 0)
        {
            xx = x1 + t2 * (x2 - x1);
            yy = y1 + t2 * (y2 - y1);
        }
        line(x, y, xx, yy);
    }
    getch();
    closegraph();
    return 0;
}