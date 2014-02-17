/*
  Main file.
 */

#include <iostream>
#include "fox_and_hounds.h"

using namespace std;

int main()
{
    char quit;

    while(true)
    {
        cout << "the game board:" << endl;
        draw_board();
        cout << "Would you like to quit?: (y or n)";
        cin >> quit;
        if (quit == 'y')
            break;
    }
}
