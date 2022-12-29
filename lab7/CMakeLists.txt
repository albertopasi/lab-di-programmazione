cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD)
project(lab7)
add_executable(map_tester.bin
maze_tester.cpp
Maze.cpp
)
add_executable(maze.bin
Maze.cpp
Robot.cpp
RandomRobot.cpp
RightHandRuleRobot.cpp
)