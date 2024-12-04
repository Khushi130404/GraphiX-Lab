#include <stdio.h>
#include <math.h>
#include <graphics.h>

void code(int, int, int[4], int, int, int, int);
void or_operation(int[2], int[4], int[4]);
void and_operation(int[2], int[4], int[4]);

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
    int c1[4], c2[4], c[4];
    code(x1, y1, c1, Xmin, Ymin, Xmax, Ymax);
    code(x2, y2, c2, Xmin, Ymin, Xmax, Ymax);
    or_operation(c1, c2, c);
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += c[i];
    }
    if (sum == 0)
    {
        line(x1, y1, x2, y2);
    }
    else
    {
        sum = 0;
        int cc[4];
        and_operation(c1, c2, cc);
        for (int i = 0; i < 4; i++)
        {
            sum += cc[i];
        }
        if (sum == 0)
        {
            int x = x1, y = y1, xx = x2, yy = y2;
            float m = (float)(y2 - y1) / (x2 - x1);
            if (c[0] == 1)
            {
                yy = Ymax;
                xx = x1 + (Ymax - y1) / m;
            }
            if (c[1] == 1)
            {
                y = Ymin;
                x = x1 + (Ymin - y1) / m;
            }
            if (c[2] == 1)
            {
                xx = Xmax;
                yy = y1 + (Xmax - x1) * m;
            }
            if (c[3] == 1)
            {
                x = Xmin;
                y = y1 + (Xmin - x1) * m;
            }
            line(x, y, xx, yy);
        }
    }
    getch();
    closegraph();
    return 0;
}

void code(int x, int y, int c[4], int Xmin, int Ymin, int Xmax, int Ymax)
{
    c[0] = (y > Ymax) ? 1 : 0;
    c[1] = (y < Ymin) ? 1 : 0;
    c[2] = (x > Xmax) ? 1 : 0;
    c[3] = (x < Xmin) ? 1 : 0;
}

void or_operation(int c1[2], int c2[4], int c[4])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = (c1[i] == 1 || c2[i] == 1) ? 1 : 0;
    }
}

void and_operation(int c1[2], int c2[4], int c[4])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = (c1[i] == 1 && c2[i] == 1) ? 1 : 0;
    }
}