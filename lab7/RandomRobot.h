#ifndef RandomRobot_h
#define RandomRobot_h

#include <iostream>
#include <cstdlib>
#include "Robot.h"

class RandomRobot : public Robot {
    void move(Maze& maze) override;

};

//#include "RandomRobot.hpp"
#endif