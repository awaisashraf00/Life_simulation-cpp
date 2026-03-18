#include<raylib.h>
#include "area.h"

int main() 
{
    InitWindow(800,800, "AWAIS Chess");
    SetAudioStreamBufferSizeDefault(4096);
    SetTargetFPS(60);
    Area grid;

    while(WindowShouldClose() == false) 
    {
        BeginDrawing();
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
