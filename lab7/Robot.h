#ifndef Robot_h
#define Robot_h

#include <iostream>
#include "Maze.h"

class Robot{
    int rob_x;
    int rob_y;

    public:
        Robot();
        int get_rob_x(){return rob_x;}
        int get_rob_y(){return rob_y;}
        bool reached_exit(Maze& maze){ return (maze.get_map()[rob_y][rob_x]=='E');}
        virtual void move(Maze& maze); //definita nelle sue classi derivate
        void find_rob( Maze& maze);
};

std::ostream& operator<<(std::ostream& os, Robot rob);

#endif