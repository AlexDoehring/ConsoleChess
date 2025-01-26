#include <string>
#include <list>
#include "piece.hpp"




// std::list<Space*> Pawn::getMoves() {
//     std::list<Space*> moves;
//     if (firstMove) {
//         moves.push_back(new Space(getLoc()->getRow() + 2, getLoc()->getCol()));
//     }
//     moves.push_back(new Space(getLoc()->getRow() + 1, getLoc()->getCol()));
//     return moves;
// };


// std::list<Space*> Pawn::getAttacks() {
//     std::list<Space*> attacks;
//     attacks.push_back(new Space(getLoc()->getRow() + 1, getLoc()->getCol() + 1));
//     attacks.push_back(new Space(getLoc()->getRow() + 1, getLoc()->getCol() - 1));
//     return attacks;
// };

// std::list<Space*> Rook::getMoves() {
//     std::list<Space*> moves;
//     for (int i = 0; i < 8; i++) {
//         moves.push_back(new Space(getLoc()->getRow() + i, getLoc()->getCol()));
//         moves.push_back(new Space(getLoc()->getRow(), getLoc()->getCol() + i));
//     }
//     return moves;
// };