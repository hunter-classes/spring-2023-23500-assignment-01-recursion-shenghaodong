#include <iostream>
/*
Knight can move in a L shape:
Ex:
K**
  *
  *
3 --> 2
*/

std::string solveKnight(std::string[][] board){
    //Recursively Solve
    //Base Case
    if(){

    }else{
      //Solve Up (left) then Up (right)
      //Solve Down (left) then Down (right)

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
//Mark spot on Arraylist as "S" if solved so the program knows that the spot is already solved 
//add a "return" if the program doesn't find any solutions