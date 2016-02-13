/*
  Main file.
*/

#include "fox_and_hounds.h"

using namespace std;

int main()
{
    // initialize ncurses screen
    init();

    // Print title and initial instructions
    printw("FOX and HOUNDS\n\n");
    printw("Press \"q\" or \"Q\" to exit.\n\n\n");

    // Let player start play, clear screen and start
    printw("Press and key to start.");
    int ch = getch();
    clear();
    draw_board();
    ch = getch();
    printw("Player 1 is the Fox and player 2 is the Hounds.\n");

    int key_in;
    while(true)
    {
        key_in = getch();
        if(key_in == 'q' || key_in == 'Q')
        {
            printw("Exiting... bye!\n");
            endwin();
            break;
        }
    }

    
    return 0;
}


void init()
{
    initscr();
    clear();
    noecho();
    cbreak();
}
