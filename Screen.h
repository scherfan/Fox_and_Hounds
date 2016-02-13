/*
 * game.cpp header file
 */

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
    void print_msg(const char *message);
    int get_height();
    int get_width();
};



#endif
