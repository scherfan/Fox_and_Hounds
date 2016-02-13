/*
 * Screen methods.
 */

#include "Screen.h"

// constructor, initializes  the nucurses Screen
Screen::Screen()
{
    initscr();  //initialize screen
    clear();    //clears ncurses screen
    noecho();   //if a letter is input by user, it will not be printed in the terminal
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0); //hides cursor
    getmaxyx(stdscr, _height, _width);
}

// destructor
Screen::~Screen()
{
    endwin();
}

void Screen::prnt_msg(const char *message)
{
    printw(message);
}

int Screen::get_height()
{
    return _height;
}

int Screen::get_width()
{
    return _width;
}
