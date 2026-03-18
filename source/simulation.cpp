#include "simulation.h"

Simulation::Simulation(){
}

void Simulation::Set_value_on_pos(int x, int y , int value)
{
    grid.grid[x][y] = value;
}

int Simulation::count_neighbour(int x, int y)
{
    std::vector<Vector2> offset = {
        {1,0},
        {0,1},
        {-1,0},
        {0,-1},
        {-1,-1},
        {-1,1},
        {1,-1},
        {1,1},
    };
    
    int living_neighbour;
    for(auto coord:offset){
        int row_of = row_of + coord.x;
        int col_of = col_of + coord.y;
        living_neighbour+= grid.Get_Value_at(row_of,col_of);

    }
}

void Simulation::Draw_Simulation()
{
    grid.Draw();
}

// void Simulation::logic(){

// }