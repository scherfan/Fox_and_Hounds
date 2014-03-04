/*
  Fox_and_hounds .h file.
*/

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

#include <iostream>
#include <string>


class Game_Board
{
public:
    Game_Board();
    void draw_board();
private:
    std::string _board[8][8];
};
class Game_Piece : public Game_Board
{
public:
    Game_Piece();
    void move_fox(Game_Board b, char dir1, char dir2);
    void move_hound(Game_Board b, int hnum, char dir1, char dir2);
public:
    int x;
    int y;
    std::string Name;
}

#endif
