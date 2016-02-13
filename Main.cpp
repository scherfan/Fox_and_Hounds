/*
  Main file.
*/

#include "fox_and_hounds.h"

using namespace std;

int main()
{
    // initialize ncurses screen
    Screen scr;

    // Print title and initial instructions
    prnt_msg("FOX and HOUNDS\n\nPress \"q\" or \"Q\" to exit.\n\n\n");

    // Let player start play, clear screen and start
    prnt_msg("Press and key to start.\n");
    int ch = getch();
    clear();
    prnt_msg("Player 1 is the Fox and player 2 is the Hounds.\n");

    
    while(true)
    {
        key_in = getch();
        if(key_in == 'q' || key_in == 'Q')
        {
            break;
        }
        else
        {
            mvaddch(row, col, main_char);
        }
        

    }

    printw("Exiting... bye!\n");
    endwin();
            
    return 0;
}
