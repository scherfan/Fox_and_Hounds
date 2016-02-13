/*
  Main file.
*/
#include <iostream>
#include <string>
#include <ncurses.h>

#include "Screen.h"
#include "Character.h"

using namespace std;

void main_loop();

int main()
{
    // initialize ncurses screen
    Screen scr;
    nodelay(stdscr, FALSE);

    // Make sure screen is the right size
    if(scr.get_width() < scr.get_board_width() + 3 || scr.get_height() < scr.get_board_height() + 4)
    {
        printw("Your window is: %d in width, %d in height.\n", scr.get_width(), scr.get_height());
        printw("Try resizing your window(if possible to >(37x51)) and then run this program again\n Press and button.");
        refresh();
        int chh = getch();
        return -1;
    }
    else
        printw("Your window is: %d in width, %d in height, perfect.\n", scr.get_width(), scr.get_height());        

    // Print title and initial instructions
    scr.prnt_msg("FOX and HOUNDS\n\nPress \"q\" or \"Q\" to exit.\n\n\n");

    // Let player start play, clear screen and start
    scr.prnt_msg("Press any other key to start.\n");
    int ch = getch();
    if(ch == 'q' || ch == 'Q')
        return 0;
    clear();
    scr.prnt_msg("Player 1 is the Fox and player 2 is the Hounds.\n");
    scr.draw_board();

    // create characters
    Character fox('F', 33, 6);
    Character hnd1('H1', 5, 12);
    Character hnd2('H2', 5, 24);
    Character hnd3('H3', 5, 36);
    Character hnd4('H4', 5, 48);
    
    Character char_list[5] = {fox, hnd1, hnd2, hnd3, hnd4};

    ch = getch();

   


            
    return 0;
}

