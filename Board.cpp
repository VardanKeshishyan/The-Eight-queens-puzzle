#include "Board.h"
#include <iostream>
#include <cmath>
using namespace std;

Board::Board(int size) : size(size) {}



void Board::displayBoard() const {
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            bool queenPresent = false;
            for (const Queen& queen : queens) {
                if (queen.getRow() == row && queen.getCol() == col) {
                    queenPresent = true;
                    break;
                }
            }
            cout << (queenPresent ? 'Q' : '.') << ' ';
        }
        cout << "\n";
    }
}

bool Board::isSafe(int row, int col) const {
    for (const Queen& queen : queens) {
        if (queen.getRow() == row || queen.getCol() == col ||
            abs(queen.getRow() - row) == abs(queen.getCol() - col)) {
            return false;
        }
    }
    return true;
}

void Board::placeQueens(int col) {
    if (col == size) {
        return;
    }
    for (int row = 0; row < size; ++row) {
        if (isSafe(row, col)) {
            queens.emplace_back(row, col);
            placeQueens(col + 1);
            if (queens.size() == size) {
                return;
            }
            queens.pop_back();
        }
    }
}