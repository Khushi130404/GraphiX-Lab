#include <graphics.h>
#include <conio.h>
#include <iostream> // Include iostream for std::cout

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int width = getmaxx();
    int height = getmaxy();

    std::cout << "Graphics Window Width: " << width << std::endl;
    std::cout << "Graphics Window Height: " << height << std::endl;

    // Graphics Window Width : 640
    // Graphics Window Height : 480

    getch();
    closegraph();
    return 0;
}
