/*
 * Screen methods.
 */

#include "Screen.h"


// constructor, initializes  the nucurses Screen
Screen::Screen()
{
    initscr();  //initialize screen
    clear();    //clears ncurses screen
    noecho();   //if a letter is input by user, it will not be printed in the terminal
    raw();
    keypad(stdscr, TRUE);
    curs_set(0); //hides cursor
    getmaxyx(stdscr, _height, _width);

}

// destructor
Screen::~Screen()
{
    endwin();
}

void Screen::prnt_msg(const char *message)
{
    printw(message);
}

int Screen::get_height()
{
    return _height;
}

int Screen::get_width()
{
    return _width;
}

int Screen::get_board_width()
{
    return board_width;
}

int Screen::get_board_height()
{
    return board_height;
}

void Screen::draw_board()
{
    printw("   0000000111111111122222222223333333333444444444455\n");
    printw("   3456789012345678901234567890123456789012345678901\n");
    printw("3  -------------------------------------------------\n");
    printw("4  |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("5  |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("6  |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("7  -------------------------------------------------\n");
    printw("8  |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("9  |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("10 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("11 -------------------------------------------------\n");
    printw("12 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("13 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("14 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("15 -------------------------------------------------\n");
    printw("16 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("17 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("18 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("19 -------------------------------------------------\n");
    printw("20 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("21 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("22 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("23 -------------------------------------------------\n");
    printw("24 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("25 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("26 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("27 -------------------------------------------------\n");
    printw("28 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("29 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("30 |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|     |\n");
    printw("31 -------------------------------------------------\n");
    printw("32 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("33 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("34 |     |xxxxx|     |xxxxx|     |xxxxx|     |xxxxx|\n");
    printw("35 -------------------------------------------------\n");
}

void Screen::add_char(Character &x)
{
    mvaddch(x.get_row(), x.get_col(), x.get_symbol());
}

void Screen::erase_char(Character &x)
{
    mvaddch(x.get_row(), x.get_col(), ' ');
}

void Screen::move_char(Character &x, int row, int col)
{
    if((row >= 0 && row < board_height) && (col >= 0 && col < board_width))
    {
        if(!target_position(row, col))
            return;
        erase_char(x);
        mvaddch(row, col, x.get_symbol());
        x.get_pos(row, col);
    }
}

/*bool Screen::target_position(int row, int col)
{

    if(fox.get_row() == row && fox.get_col == col)
    {
        return false;
    }
    else if(char_list[1].get_row() == row && char_list[1].get_col() == col)
    {
        return false;
    }
    else if(char_list[2].get_row() == row && char_list[2].get_col() == col)
    {
        return false;
    }
    else if(char_list[3].get_row() == row && char_list[3].get_col() == col)
    {
        return false;
    }
    else if(char_list[4].get_row() == row && char_list[4].get_col() == col)
    {
        return false;
    }
    else
        return true;
}
*/
