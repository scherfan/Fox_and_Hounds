/*
  Main file.
*/
#include <iostream>
#include <string>
#include <ncurses.h>

#include "Screen.h"
#include "Character.h"

using namespace std;


int main()
{
    // initialize ncurses screen
    Screen scr;

    // Print title and initial instructions
    scr.prnt_msg("FOX and HOUNDS\n\nPress \"q\" or \"Q\" to exit.\n\n\n");

    // Let player start play, clear screen and start
    scr.prnt_msg("Press and key to start.\n");
    int ch = getch();
    clear();
    scr.prnt_msg("Player 1 is the Fox and player 2 is the Hounds.\n");
    scr.draw_board();
    int tmp_w, tmp_h;
    tmp_w = scr.get_width();
    tmp_h = scr.get_height();
    printw("%d, %d\n", tmp_w, tmp_h);
    mvaddch(3, 9, 'F');
    ch = getch();

   


            
    return 0;
}
