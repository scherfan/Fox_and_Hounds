/*
  Main file.
*/

#include "fox_and_hounds.h"

using namespace std;

int main()
{
    char quit;
    string fox_move, hound_move;
    char f1, f2, h1, h2;
    int hnum;
   
    Game_Board b;

    cout << endl << "FOX AND HOUNDS" << endl << endl;
    cout << "Player 1 is the Fox and player 2 is the Hounds" << endl;
    b.draw_board();
    while(true)
    {
        cout << "To move the Fox just type:" << endl << "fl = forward left" << endl
             << "fr = forward right" << endl << "bl = backwards left" << endl
             << "br = backwards right" << endl;
        cin >> fox_move;
        if(fox_move.length() > 2)
            break;
        else
        {
            f1 = fox_move[0];
            f2 = fox_move[1];
            cout << f1 << " " << f2 << endl;
        }
        //execute fox's move
        b.move_fox(f1, f2);
        b.draw_board();
        cout << "To move a Hound just type the number of the Hound and:" << endl
             << "fl = forward left" << endl << "fr = forward right" << endl;
        cin >> hound_move;
        if(hound_move.length() > 3)
            break;
        else
        {
            hnum = hound_move[0];
            h1 = hound_move[1];
            h2 = hound_move[2];
        }
        //execute hound's move
        b.move_hound(hnum, h1, h2);
        b.draw_board();
        cout << "Would you like to quit?: (y or n)";
        cin >> quit;
        if (quit == 'y')
            break;
    }
}
