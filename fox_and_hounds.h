/*
  Fox_and_hounds .h file.
*/

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

#include <iostream>
#include <string>


class Game_Piece
{
public:
    Game_Piece();
    void draw_board();
    void move_fox(char dir1, char dir2);
    void move_hound(int hnum, char dir1, char dir2);
private:
    std::string _board[8][8];
    int x;
    int y;
    std::string Name;
};

#endif
