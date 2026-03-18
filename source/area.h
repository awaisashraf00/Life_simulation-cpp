#pragma once

#include <vector>

class Area
{
    private:
        void Draw();
        int rows;
        int columns;
    public:
        int grid[rows][columns];
        Area();
        ~Area();
};
