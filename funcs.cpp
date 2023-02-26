#include <iostream>
/*
Knight can move in a L shape:
Ex:
K**
  *
  *
3 --> 2
*/
std::string solveKnight(char[][] chessboard, int rowStart, int colStart){
    //Recursively Solve
    //Base Case
    int counter = 0;
    if(counter == 25){
      return "";
    }else if(counter ){


    }else{
      //recurse 8 times for each way the knight can move

      //Up
      solveKnight(chessboard, row, col);
      solveKnight(chessboard, row, col);

      //Down
      solveKnight(chessboard, row, col);
      solveKnight(chessboard, row, col);

      //Left
      solveKnight(chessboard, row, col);
      solveKnight(chessboard, row, col);

      //Right
      solveKnight(chessboard, row, col);
      solveKnight(chessboard, row, col);
    }

    //If Base Case not met solve for knight positions otherwise return

}