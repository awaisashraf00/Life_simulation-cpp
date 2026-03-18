#pragma once
#include "area.h"

class Simulation
{
private:
    void logic();
    void Set_value_on_pos(int x, int y,int value);
    int count_neighbour(int x, int y);
    Area grid;
public:
    void Draw_Simulation();
    Simulation(/* args */);
};