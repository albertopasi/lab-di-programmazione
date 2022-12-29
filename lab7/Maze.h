#ifndef Maze_h
#define Maze_h

#include <iostream>
#include <vector>
using std::vector;



class Maze{
    int row_;
    int col_;
    typedef vector<char> vettore;
    typedef vector<vettore> matrice;
    matrice map;

    public:
    //Constructor
        explicit Maze(std::string file);
    
    //Member functions
        int get_row_() const { return row_;}
        int get_col_() const { return col_;}
        matrice get_map(){ return map; }
        bool is_exit(int row_, int col_){return map[row_][col_] == 'E';}
        bool is_wall(int row_, int col_){return map[row_][col_] == '*';}
        bool is_empty(int row_, int col_){return map[row_][col_] == ' ';}
        bool is_robot(int row_, int col_){return map[row_][col_] == 'S';}
        bool is_available(int row_, int col_){return (map[row_][col_] == ' ' or map[row_][col_]=='E');}
        void crea_matrice(int row_, int col_);
        int move(int y , int x);
};

    std::ostream& operator<<(std::ostream& os, Maze& obj);

    
#endif