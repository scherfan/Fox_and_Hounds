/*
  Will contain all the class and functions for drawing the gameboard and moving the
  pieces.
*/

#include "fox_and_hounds.h"

using namespace std;

Game_Board::Game_Board()
{

    struct Player Fox;
    struct Player H1;
    struct Player H2;
    struct Player H3;
    struct Player H4;

    Fox.x = 0;
    Fox.y = 7;
    Fox.name = "Fox";
    H1.x = 1;
    H1.y = 0;
    H1.name = "HD1";
    H2.x = 3;
    H2.y = 0;
    H2.name = "HD2";
    H3.x = 5;
    H3.y = 0;
    H3.name = "HD3";
    H4.x = 7;
    H4.y = 0;
    H4.name = "HD4";


    for (int i = 0; i < 8; i++)
    {
        //initialize all moveable squares to 'x' while invalid squares are ' '
        for (int l = 0; l < 8; l++)
        {
            if (i % 2 == 0) //y is even
            {
                if (l % 2 == 1)//then all x's will be odd on that row
                    _board[i][l] = " x ";
            }
            else if (i % 2 == 1)//y is odd
            {
                if(l % 2 == 0)//then all x's will be even on that row
                    _board[i][l] = " x ";
            }
            else
                _board[i][l] = "   ";
            
            //  cout << i << l << " " <<_board[i][l] << endl;
        }
    }

   //set up pieces
    _board[H1.x][H1.y] = H1.name;
    _board[H2.x][H2.y] = H2.name;
    _board[H3.x][H3.y] = H3.name;
    _board[H4.x][H3.y] = H4.name;
    _board[Fox.x][Fox.y] = Fox.name;
}

void Game_Board::draw_board()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x" << _board[1][0] << "x|     |x" << _board[3][0] 
         << "x|     |x" << _board[5][0] << "x|     |x" << _board[7][0] << "x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x" << _board[0][1] << "x|     |x" << _board[2][1] << "x|     |x" 
         << _board[4][1] << "x|     |x" << _board[6][1] << "x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x" << _board[1][2] << "x|     |x" << _board[3][2] << "x|     |x" 
         << _board[5][2] << "x|     |x" << _board[7][2] << "x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x" << _board[0][3] << "x|     |x" << _board[2][3] << "x|     |x" 
         << _board[4][3]<< "x|     |x" << _board[6][3] << "x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x" << _board[1][4] << "x|     |x" << _board[3][4] << "x|     |x" 
         << _board[5][4] << "x|     |x" << _board[7][4] << "x|" << endl;    
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x" << _board[0][5] << "x|     |x" << _board[2][5] << "x|     |x" 
         << _board[4][5] << "x|     |x" << _board[6][5] << "x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x" << _board[1][6] << "x|     |x" << _board[3][6] << "x|     |x" 
         << _board[5][6] << "x|     |x" << _board[7][6] << "x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x" << _board[0][7] << "x|     |x" << _board[2][7] << "x|     |x" 
         << _board[4][7] << "x|     |x" << _board[6][7] << "x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
}
/*
  For the Fox
  fl = x:i-1 y:i-1
  fr = x:i+1 y:i-1
  bl = x:i-1 y:i+1
  br = x:i+1 y:i+1
*/
void Game_Board::move_fox(char dir1, char dir2)
{
    
}

/*
  For the Hounds
  fl = x:i+1 y:i+1
  fr = x:i-1 y:i+1
*/
void Game_Board::move_hound(int hnum, char dir1, char dir2)
{
    
}
