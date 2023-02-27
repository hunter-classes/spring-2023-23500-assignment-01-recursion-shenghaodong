#include <iostream>
/*
Knight can move in a L shape:
Ex:
K**
  *
  *
3 --> 2
*/

void solveKnight(int board[5][5], int row, int col, int &counter){
  //Base Case
  if(counter == 25){
    counter = 0;
    exit(0);
  }
  if(row > 4 || col > 4){
    //Checks for out of bounds if it is then go back on the stack
    return;
  }
  //Check current position and if it's a new position mark it as the char 'S' and do counter++
  if(board[row][col] == 0){
    counter++;
    board[row][col] == counter;
    //Print position and stuff
  }

  //Recurse

  //Up
  solveKnight(board, row, col, counter);
  solveKnight(board, row, col, counter);

  //Down
  solveKnight(board, row, col, counter);
  solveKnight(board, row, col, counter);

  //Left
  solveKnight(board, row, col, counter);
  solveKnight(board, row, col, counter);

  //Right
  solveKnight(board, row, col, counter);
  solveKnight(board, row, col, counter);

  //If Base Case not met solve for knight positions otherwise return

}
//Mark spot on Arraylist as "S" if solved so the program knows that the spot is already solved 
//add a "return" if the program doesn't find any solutions