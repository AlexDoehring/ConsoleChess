/*
 Piece Objects
*/
#include <list>
#include <string>

class Space;

enum Color {WHITE, BLACK};

class Piece {
    public:
        Piece(Space *loc, Color col);

        /*
        * Move the piece to a new location
        * Should differ piece to piece
        * Moving should update the location of the piece
        * as well as the potential moves and attacks
        */
        virtual void move(Space *newLoc) = 0;
        Space *getLoc() { return loc; };
        virtual std::list<Space*> getMoves() { return moves; };
        virtual std::list<Space*> getAttacks() { return attacks; };
        Color getColor();
        virtual std::string getType() = 0;
    private:
        Color color;
    protected:
        Space *loc;
        std::list<Space*> moves; //potential moves
        std::list<Space*> attacks; //potential attacks
};

class Pawn : public Piece {
    public:
        Pawn(Space *loc, Color col);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "Pawn"; };

    private:
        bool firstMove;
};

class Rook : public Piece {
    public:
        Rook(Space *loc, Color col);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "Rook"; };
};

class Bishop : public Piece {
    public:
        Bishop(Space *loc);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "Bishop"; };
};

class Knight : public Piece {
    public:
        Knight(Space *loc);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "Knight"; };
};

class Queen : public Piece {
    public:
        Queen(Space *loc);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "Queen"; };
};

class King : public Piece {
    public:
        King(Space *loc);
        void move(Space *newLoc) override;
        virtual std::list<Space*> getMoves() override;
        virtual std::list<Space*> getAttacks() override;
        std::string getType() override { return "King"; };

    private:
        bool firstMove;
};