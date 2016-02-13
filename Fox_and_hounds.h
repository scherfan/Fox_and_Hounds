/*
  Fox_and_hounds .h file.
*/

#ifndef FOXANDHOUNDS_H
#define FOXANDHOUNDS_H

#include <iostream>
#include <string>
#include <ncurses.h>

#include "Screen.h"
#include "Game.h"


void init_board(std::string board[][8]);
void draw_board();
void init();

#endif
