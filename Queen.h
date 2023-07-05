#ifndef QUEEN_H
#define QUEEN_H

class Queen {

private:
    int row;
    int col;

public:
    Queen(int row, int col);
    int getRow() const;
    int getCol() const;
    void moveToNextRow();

};

#endif