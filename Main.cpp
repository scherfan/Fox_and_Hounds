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
    printw("Player 1 is the Fox and player 2 is the Hounds.\n");

    
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


void init()
{
    initscr();  //initialize screen
    clear();    //clears ncurses screen
    noecho();   //if a letter is input by user, it will not be printed in the terminal
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0); //hides cursor
}
