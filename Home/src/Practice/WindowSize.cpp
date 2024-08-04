#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int width = getmaxx();
    int height = getmaxy();

    std::cout << "Graphics Window Width: " << width << std::endl;
    std::cout << "Graphics Window Height: " << height << std::endl;

    getch();
    closegraph();
    return 0;
}
