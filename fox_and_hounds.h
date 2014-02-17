/*
  Fox_and_hounds .h file.
*/

#include <iostream>
#include <string>

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

enum Game_Piece{HOUND1, HOUND2, HOUND3, HOUND4, FOX, EMPTY_SQUARE, INVALID_SQUARE};
enum Player_Type{PT_FOX, PT_HOUND};

class Game_Board
{
public:
    Game_Board();
    void move_fox(char dir1, char dir2);
    void move_hound(int hnum, char dir1, char dir2);
    void draw_board();
private:
    Game_Piece _board[8][8];
    Player_Type _whose_move;
};
#endif
