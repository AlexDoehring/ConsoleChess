/*Board object*/

#include "space.hpp"
#include "space.hpp"
#include <iostream>
#include <string>
#include <array>

class Board {
    public:
        Board();
        void printBoard();
        void setBoard(int row, int col, char value);
        char getSpace(int row, int col);
        void resetBoard();
    private:
        std::array<std::array<Space, 8>, 8> board;
};