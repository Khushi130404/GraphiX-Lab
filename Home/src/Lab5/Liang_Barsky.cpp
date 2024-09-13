#include <graphics.h>
#include <conio.h>

float max(float a, float b)
{
    return (a > b) ? a : b;
}

float min(float a, float b)
{
    return (a < b) ? a : b;
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1 = 56, y1 = 117;
    int x2 = 425, y2 = 385;
    int Xmin = 150, Ymin = 100, Xmax = 500, Ymax = 350;
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
            printf("\nLine is parallel");
            for (int i = 0; i < 4; i++)
            {
                if (q[i] < 0)
                {
                    flag = 0;
                    printf("\nLine is Completely Outside");
                    break;
                }
            }
            break;
        }
        else
        {
            float t = q[i] / p[i];
            if (p[i] < 0)
            {
                t1 = max(t1, t);
            }
            if (p[i] > 0)
            {
                t2 = min(t2, t);
            }
        }
    }
    if (flag)
    {
        if (t1 < t2)
        {
            int x = x1, y = y1, xx = x2, yy = y2;
            if (t1 != 0)
            {
                x = x1 + t1 * (x2 - x1);
                y = y1 + t1 * (y2 - y1);
            }
            if (t2 != 1)
            {
                xx = x1 + t2 * (x2 - x1);
                yy = y1 + t2 * (y2 - y1);
            }
            line(x, y, xx, yy);
            line(x + 1, y + 1, xx + 1, yy + 1);
            line(x - 1, y - 1, xx - 1, yy - 1);
        }
        else if (t1 > t2)
        {
            printf("\nLine is Outside the window");
        }
    }
    getch();
    closegraph();
    return 0;
}
