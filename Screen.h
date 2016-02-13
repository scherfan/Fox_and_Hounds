/*
 * game.cpp header file
 */
#include <ncurses.h>

#ifndef SCREEN_H
#define SCREEN_H

class Screen
{
    int _height, _width;
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
    void draw_board();
};



#endif
