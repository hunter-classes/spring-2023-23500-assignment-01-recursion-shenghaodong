#include <iostream>
/*
Knight can move in a L shape:
Ex:
K**
  *
  *
3 --> 2
*/

void solveKnight(int board[5][5], int col, int row, int counter, bool &solved){
  //Base Case
  if(counter == 25){
    solved = true;
    return;
  }
  
  if((col > 4 || row > 4) || (col < 0 || row < 0 || board[col][row] != 0)){
    //Checks for out of bounds if it is then go back on the stack
    //std::cout << counter << std::endl;
    return;
  }

  //Check current position and if it's a new position mark it as the number it corresponds and do counter
  if(board[col][row] == 0){
    counter++;
    board[col][row] = counter;
    std::cout << counter << std::endl;
  }

  //Recurse
  //Up
  if (!solved) solveKnight(board, col - 2, row + 1, counter, solved);
  if (!solved) solveKnight(board, col - 2, row - 1, counter, solved);

  //Down
  if (!solved) solveKnight(board, col + 2, row + 1, counter, solved);
  if (!solved) solveKnight(board, col + 2, row - 1, counter, solved);

  //Left
  if (!solved) solveKnight(board, col + 1, row - 2, counter, solved);
  if (!solved) solveKnight(board, col - 1, row - 2, counter, solved);

  //Right
  if (!solved) solveKnight(board, col + 1, row + 2, counter, solved);
  if (!solved) solveKnight(board, col - 1, row + 2, counter, solved);
}