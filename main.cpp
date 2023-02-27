//Rename File Later
#include <iostream>
int main(){
    int row = 5;
    int col = 5;
    int count = 0;
    int chessBoard[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            chessBoard[row][col] = 0;
        }
    }

    //Visualize Board
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         std::cout << chessBoard[row][col] + " ";
    //     }
    //     std::cout << "\n";
    // }

    //Solve Knight 5x5 Board with the starting point being 2, 2
    return 0;
}