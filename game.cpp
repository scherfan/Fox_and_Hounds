/*
  Will contain all the class and functions for drawing the gameboard and moving the
  pieces.
*/

#include "fox_and_hounds.h"

using namespace std;

void init_board(string board[][8])
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = "xxx";
        }
    }
}

void draw_board()
{ 
    printw("-------------------------------------------------\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("-------------------------------------------------\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("-------------------------------------------------\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("-------------------------------------------------\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("-------------------------------------------------\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("-------------------------------------------------\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("-------------------------------------------------\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("|xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("-------------------------------------------------\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("|     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("-------------------------------------------------\n");

}
