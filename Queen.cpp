#include "Queen.h"

Queen::Queen(int row, int col) : row(row), col(col) {}

int Queen::getRow() const {
    return row;
}

int Queen::getCol() const {
    return col;
}

void Queen::moveToNextRow() {
    ++row;
}