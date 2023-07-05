
#include <iostream>

using namespace std;

#include "Board.h"

int main() {

    cout << "CHESS" << endl;
    Board board(8);
    board.placeQueens(0);
    board.displayBoard();
}