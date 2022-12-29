#include <iostream>
#include "Robot.h"

void Robot::find_rob( Maze& maze){
    for (int i = 0; i < maze.get_map().size(); i++){
        for (int j = 0; j < maze.get_map()[i].size(); j++){
            if(maze.get_map()[i][j] == 'S') {
                rob_x=j;
                rob_y=i;
                return;
            }
        }    
    }
}
