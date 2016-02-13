/*
  Main file.
*/
#include <iostream>
#include <string>
#include <ncurses.h>

#include "Screen.h"
#include "Game.h"
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
    ch = getch();

   


            
    return 0;
}
