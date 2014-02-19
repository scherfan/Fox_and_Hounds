/*
  Fox_and_hounds .h file.
*/

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

#include <iostream>
#include <string>


class Game_Board
{
    struct Player
    {
        std::string name;
        int x;
        int y;
    };

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
};

#endif
