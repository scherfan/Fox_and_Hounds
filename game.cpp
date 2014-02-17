/*
  Will contain all the class and functions for drawing the gameboard and moving the
  pieces.
 */

#include "fox_and_hounds.h"

using namespace std;


Game_Board::Game_Board()
{
    
}

void Game_Board::draw_board()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x " << "x" << " x|     |x " << "x" << " x|     |x " 
         << "x" << " x|     |x " << "x" << " x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x " << "x" << " x|     |x " << "x" << " x|     |x " << "x" 
         << " x|     |x " << "x" << " x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x " << "x" << " x|     |x " << "x" << " x|     |x " 
         << "x" << " x|     |x " << "x" << " x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x " << "x" << " x|     |x " << "x" << " x|     |x " << "x"
         << " x|     |x " << "x" << " x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x " << "x" << " x|     |x " << "x" << " x|     |x " 
         << "x" << " x|     |x " << "x" << " x|" << endl;    
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x " << "x" << " x|     |x " << "x" << " x|     |x " << "x" 
         << " x|     |x " << "x" << " x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "|     |x " << "x" << " x|     |x " << "x" << " x|     |x " 
         << "x" << " x|     |x " << "x" << " x|" << endl;
    cout << "|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "|x " << "x" << " x|     |x " << "x" << " x|     |x " << "x" 
         << " x|     |x " << "x" << " x|     |" << endl;
    cout << "|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |" << endl;
    cout << "-------------------------------------------------" << endl;
}

void Game_Board::move_fox(char dir1, char dir2)
{
    
}

void Game_Board::move_hound(int hnum, char dir1, char dir2)
{
    
}
