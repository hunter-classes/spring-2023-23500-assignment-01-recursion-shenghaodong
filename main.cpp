#include <iostream>
#include "funcs.h"

int main(){
    int counter = 0;
    int board[5][5];
    bool solved = false;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            board[i][j] = 0;
        }
    }
    std::cout << "Testing" << std::endl;

    solveKnight(board, 0, 0, counter, solved);

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         std::cout << board[i][j] << " ";
    //     }
    //     std::cout << "\n" << std::endl;
    // }


    return 0;
}


/*
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n" << std::endl;
    }

    std::cout << counter << std::endl;

*/