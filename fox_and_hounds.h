/*
  Fox_and_hounds .h file.
*/

#include <iostream>
#include <string>

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

typedef struct
{
    int x;
    int y;
    std::string name;
}Player;

enum Player_Type{PT_FOX, PT_HOUND};
class Game_Board
{
public:
    std::string *H1;
    std::string *H2;
    std::string *H3;
    std::string *H4;
    std::string *F;

    
    Game_Board();
    void move_fox(char dir1, char dir2);
    void move_hound(int hnum, char dir1, char dir2);
    void draw_board();
private:
    std::string _board[8][8];
    Player_Type _whose_move;
};
#endif
