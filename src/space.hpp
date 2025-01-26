
// enum Column{
//     A, B, C, D, E, F, G, H
// };



class Piece;


class Space {
    public:
        Space() {
            row = 0;
            col = 0;
            occupied = nullptr;
            attackable = false;
        };
        Space(int inRow, int inCol) {
            row = inRow;
            col = inCol;
            occupied = nullptr;
            attackable = false;
        };
        

        int getRow() { return row; };
        void setRow(int inRow) { row = inRow; };

        int getCol() { return col; };
        void setCol(int inCol) { col = inCol; };

        Piece* getPiece() { return occupied; }; //get the piece that occupies the space
        void OccupySpace(Piece* inPiece) { occupied = inPiece; }; //occupy space with a piece
        void UnoccupySpace() { occupied = nullptr; }; //unoccupy space

        bool isAttackable() { return attackable; };
        void changeAttackable() { attackable = !attackable; };
        bool isValidSpace() { return row >= 0 && row < 8 && col >= 0 && col < 8; };

    private:
        int row;
        int col;
        Piece* occupied;
        bool attackable;
};;