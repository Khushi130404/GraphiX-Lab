#include <graphics.h>
#include <conio.h>

void and_operation(int c1[4], int c2[4], int c[4])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = (c1[i] == 0 || c2[i] == 0) ? 0 : 1;
    }
}

void or_operation(int c1[4], int c2[4], int c[4])
{
    for (int i = 0; i < 4; i++)
    {
        c[i] = (c1[i] == 0 && c2[i] == 0) ? 0 : 1;
    }
}

void code(int x, int y, int Xmin, int Ymin, int Xmax, int Ymax, int c[4])
{
    c[0] = (y > Ymax) ? 1 : 0;
    c[1] = (y < Ymin) ? 1 : 0;
    c[2] = (x > Xmax) ? 1 : 0;
    c[3] = (x < Xmin) ? 1 : 0;
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
    int c1[4];
    int c2[4];
    int c[4];
    code(x1, y1, Xmin, Ymin, Xmax, Ymax, c1);
    code(x2, y2, Xmin, Ymin, Xmax, Ymax, c2);
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
        int cc[4];
        and_operation(c1, c2, cc);
        sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum += cc[i];
        }
        if (sum == 0)
        {
            float m = (float)(y2 - y1) / (x2 - x1);
            int x = x1, y = y1, xx = x2, yy = y2;
            if (c[0] == 1)
            {
                xx = x1 + (Ymax - y1) / m;
                yy = Ymax;
            }
            if (c[1] == 1)
            {
                x = x1 + (Ymin - y1) / m;
                y = Ymin;
            }
            if (c[2] == 1)
            {
                yy = y1 + (Xmax - x1) * m;
                xx = Xmax;
            }
            if (c[3] == 1)
            {
                y = y1 + (Xmin - x1) * m;
                x = Xmin;
            }
            line(x, y, xx, yy);
            line(x + 1, y + 1, xx + 1, yy + 1);
            line(x - 1, y - 1, xx - 1, yy - 1);
        }
    }
    getch();
    closegraph();
    return 0;
}
