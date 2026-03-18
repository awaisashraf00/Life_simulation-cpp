#pragma once
#include <vector>
#include <utility>
#include<raylib.h>

class Area
{
    private:
        int rows;
        int columns;
        int cell_size;
        std::vector<Color> box_state;
    public:
        std::vector<std::vector<int>> grid;
        int Get_Value_at(int x , int y);
        void Draw();
        Area();
        ~Area();
};
