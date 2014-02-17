/*
  Main file.
 */

#include "fox_and_hounds.h"

using namespace std;

int main()
{
    char quit;
    string fox_move;
    string hound_move;
    
    cout << endl << "FOX AND HOUNDS" << endl << endl;
    cout << "Player 1 is the Fox and player 2 is the Hounds" << endl;
    draw_board();
    while(true)
    {
        cout << "To move the Fox just type:" << endl << "fl = forward left" << endl
             << "fr = forward right" << endl << "bl = backwards left" << endl
             << "br = backwards right" << endl;
        cin >> fox_move;
        //execute fox's move
        cout << "To move a Hound just type the number of the Hound and:" << endl
             << "fl = forward left" << endl << "fr = forward right" << endl;
        cin >> hound_move;
        //execute hound's move
        cout << "Would you like to quit?: (y or n)";
        cin >> quit;
        if (quit == 'y')
            break;
    }
}
