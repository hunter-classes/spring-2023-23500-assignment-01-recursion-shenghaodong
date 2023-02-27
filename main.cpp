#include <iostream>
#include "knights.h"

int main(){
    int counter = 0;
    int board[5][5];
    bool solved = false;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            board[i][j] = 0;
        }
    }

    std::cout << "5x5 Knights Board, Starts at (2, 2)\n" << std::endl;
    solveKnight(board, 2, 2, counter, solved);
    return 0;
}