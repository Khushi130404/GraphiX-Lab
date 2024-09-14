#include <graphics.h>
#include <conio.h>

void drawLudoBoard(int startX, int startY, int cellSize)
{
    // Colors for each player's base
    int redBaseColor = RED;
    int greenBaseColor = GREEN;
    int yellowBaseColor = YELLOW;
    int blueBaseColor = BLUE;
    int pathColor = LIGHTGRAY;

    // Draw the red base
    setfillstyle(SOLID_FILL, redBaseColor);
    rectangle(startX, startY, startX + 4 * cellSize, startY + 4 * cellSize);
    floodfill(startX + 1, startY + 1, WHITE);

    // Draw the green base
    setfillstyle(SOLID_FILL, greenBaseColor);
    rectangle(startX + 5 * cellSize, startY, startX + 9 * cellSize, startY + 4 * cellSize);
    floodfill(startX + 5 * cellSize + 1, startY + 1, WHITE);

    // Draw the yellow base
    setfillstyle(SOLID_FILL, yellowBaseColor);
    rectangle(startX + 5 * cellSize, startY + 5 * cellSize, startX + 9 * cellSize, startY + 9 * cellSize);
    floodfill(startX + 5 * cellSize + 1, startY + 5 * cellSize + 1, WHITE);

    // Draw the blue base
    setfillstyle(SOLID_FILL, blueBaseColor);
    rectangle(startX, startY + 5 * cellSize, startX + 4 * cellSize, startY + 9 * cellSize);
    floodfill(startX + 1, startY + 5 * cellSize + 1, WHITE);

    // Draw paths and center
    setfillstyle(SOLID_FILL, pathColor);

    // Vertical path on the left (red to blue)
    rectangle(startX + 4 * cellSize, startY, startX + 5 * cellSize, startY + 5 * cellSize);
    floodfill(startX + 4 * cellSize + 1, startY + 1, WHITE);

    // Horizontal path on the top (red to green)
    rectangle(startX, startY + 4 * cellSize, startX + 5 * cellSize, startY + 5 * cellSize);
    floodfill(startX + 1, startY + 4 * cellSize + 1, WHITE);

    // Vertical path on the right (green to yellow)
    rectangle(startX + 5 * cellSize, startY + 4 * cellSize, startX + 9 * cellSize, startY + 5 * cellSize);
    floodfill(startX + 5 * cellSize + 1, startY + 4 * cellSize + 1, WHITE);

    // Horizontal path on the bottom (blue to yellow)
    rectangle(startX + 4 * cellSize, startY + 5 * cellSize, startX + 5 * cellSize, startY + 9 * cellSize);
    floodfill(startX + 4 * cellSize + 1, startY + 5 * cellSize + 1, WHITE);

    // Center square (safe zone)
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(startX + 4 * cellSize, startY + 4 * cellSize, startX + 5 * cellSize, startY + 5 * cellSize);
    floodfill(startX + 4 * cellSize + 1, startY + 4 * cellSize + 1, WHITE);

    // Drawing the diagonal lines in the center
    setcolor(WHITE);
    line(startX + 4 * cellSize, startY + 4 * cellSize, startX + 5 * cellSize, startY + 5 * cellSize);
    line(startX + 4 * cellSize, startY + 5 * cellSize, startX + 5 * cellSize, startY + 4 * cellSize);
    setfillstyle(SOLID_FILL, WHITE);

    // Red Quadrant
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            fillellipse(startX + (i * 2 + 1) * cellSize, startY + (j * 2 + 1) * cellSize, cellSize / 6, cellSize / 6);
        }
    }

    // Green Quadrant
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            fillellipse(startX + (5 + i * 2 + 1) * cellSize, startY + (j * 2 + 1) * cellSize, cellSize / 6, cellSize / 6);
        }
    }

    // Yellow Quadrant
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            fillellipse(startX + (5 + i * 2 + 1) * cellSize, startY + (5 + j * 2 + 1) * cellSize, cellSize / 6, cellSize / 6);
        }
    }

    // Blue Quadrant
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            fillellipse(startX + (i * 2 + 1) * cellSize, startY + (5 + j * 2 + 1) * cellSize, cellSize / 6, cellSize / 6);
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int startX = 50, startY = 50;
    int cellSize = 30; 
    drawLudoBoard(startX, startY, cellSize);
    getch();
    closegraph();
    return 0;
}
