//Rename File Later
#include <iostream>
int main(){
    int row = 5;
    int col = 5;
    char chessBoard[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            chessBoard[row][col] = '*';
        }
    }

    //Visualize Board
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << chessBoard[row][col] + " ";
        }
        std::cout << "\n";
    }
    return 0;
}