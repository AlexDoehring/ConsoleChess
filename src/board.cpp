#include "space.hpp"
#include "board.hpp"
#include "space.hpp"
#include <iostream>
#include <string>
#include <array>


Board::Board() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            board[i][j] = Space(i, j);
        }
    }
}

void Board::resetBoard() {
    //white Pawns
    for (int j = 0; j < 8; j++) {
        
    }
}