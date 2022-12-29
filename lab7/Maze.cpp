#include "Maze.h"
#include <iostream>
#include <fstream>

Maze::Maze(std::string file)
{
    std::fstream open_file(file, std::ios::in);
    int row_count=0;
    int col_count=0;
    char value;
    std::string line;

    while(!open_file.eof()){   //larghezza matrice=caratteri prima riga
        std::getline(open_file,line,'\n');
        int temp=0;
        row_count++;
        temp=line.size();
        if(temp>col_count) col_count=temp;
    }

    crea_matrice(row_count,col_count);
    open_file.close();

    open_file.open(file);
    int y = 0;
    while(!open_file.eof()){
        std::getline(open_file,line,'\n');
        for(int x=0; x<line.size(); x++){
            map[y][x]=line[x];
        }
        y++;
    }
    open_file.close();
}

void Maze::crea_matrice(int row_, int col_) {
	map.resize(row_);
	for (int i=0; i<row_; i++) {
		map[i].resize(col_);
	}
};

int Maze::move(int y, int x){
    if(){
        
    }

}

std::ostream& operator<<(std::ostream& os, Maze& obj){
    for (int i = 0; i < obj.get_map().size(); i++){
        for (int j = 0; j < obj.get_map()[i].size(); j++){
            os << obj.get_map()[i][j];
        }    
        os << std::endl;
    }
    return os;
}

