#include<raylib.h>
#include "simulation.h"

int main() 
{
    InitWindow(800,800, "Life Simulation");
    SetTargetFPS(12);
    Simulation algo;

    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        ClearBackground(RED);
        algo.Draw_Simulation(); 
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
