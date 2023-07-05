#include "Queen.h"
#include <iostream>

#include <vector>

using namespace std;

#ifndef BOARD_H
#define BOARD_H


class Board {


private:
    int size;
    vector<Queen> queens;
    bool isSafe(int row, int col) const;
   
public:
    Board(int size);
    void placeQueens(int col);
    void displayBoard() const;

};

#endif
