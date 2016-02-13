/*
 * game.cpp header file
 */
#include <ncurses.h>

#ifndef SCREEN_H
#define SCREEN_H

#include "Character.h"

class Screen
{
    int _height, _width;
    int board_width = 52;
    int board_height = 36;

public:
    //constructor
    Screen();
    //destructor
    ~Screen(); 
    // Print a message to screen
    void prnt_msg(const char *message);
    // width and height getters
    int get_height();
    int get_width();
    int get_board_width();
    int get_board_height();
    // draws playing board
    void draw_board();
    // Add character to screen
    void add_char(Character &x);
    // Erase character from screen
    void erase_char(Character &x);
    // Move a character from one spot to another
    void move_char(Character &x, int row, int col);
    bool target_position(int row, int col);
};



#endif
