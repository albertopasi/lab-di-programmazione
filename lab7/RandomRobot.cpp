#include <iostream>
#include "RandomRobot.h"

void RandomRobot::move(Maze& maze){
    find_rob(maze);
    int count=0;
    if(maze.is_available(get_rob_y()-1, get_rob_x()-1)){
        count++;
    }
    if(maze.is_available(get_rob_y()-1, get_rob_x())){
        count++;
    }
    if(maze.is_available(get_rob_y()-1, get_rob_x()+1)){
        count++;
    }
    if(maze.is_available(get_rob_y(), get_rob_x()-1)){
        count++;
    }
    if(maze.is_available(get_rob_y(), get_rob_x()+1)){
        count++;
    }
    if(maze.is_available(get_rob_y()+1, get_rob_x()-1)){
        count++;
    }
    if(maze.is_available(get_rob_y()+1, get_rob_x())){
        count++;
    }
    if(maze.is_available(get_rob_y()+1, get_rob_x()+1)){
        count++;
    }

    int cas_move=rand()%(count+1);
    



}

