#include "area.h"
#include <math.h>


Area::Area() {
    rows = 50; 
    columns = 50;
    grid.resize(rows , std::vector<int>(columns,0));
    cell_size = sqrt((800*800)/(rows*columns));
    box_state = {BLACK,GREEN};
}

Area::~Area() {
    
}

void Area::Draw(){
    for(auto x{0};x<rows;x++){
        for(auto y{0};y<rows;y++){
            DrawRectangle((cell_size * x)-1, (cell_size * y)-1, cell_size -1, cell_size-1,box_state[grid[x][y]]);  
        }
    }
}

int Area::Get_Value_at(int x,int y){
    if(x<rows && y<rows && x > 0 && y > 0){
        return grid[x][y];
    }
    return 0;
}