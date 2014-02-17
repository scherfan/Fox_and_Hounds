/*
  Will contain all the class and functions for drawing the gameboard and moving the
  pieces.
 */
#include <iostream>
#include "fox_and_hounds.h"

using namespace std;

//enum 

void draw_board()
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
