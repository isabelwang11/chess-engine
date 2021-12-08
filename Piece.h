#ifndef PIECE_H
#define PIECE_H

#include <string>

enum PieceType {
    None = 0,
    Pawn = 1,
    // wPawn = 1,
    // bPawn = 2,
    Knight = 3,
    Bishop = 4,
    Rook = 5,
    Queen = 6,
    King = 7,
};

enum PieceCode {
    Empty = PieceType::None,
    wPawn = PieceType::Pawn,
    wOff = PieceType::Pawn,
    wKnight = PieceType::Knight,
    wBishop = PieceType::Bishop,
    wRook = PieceType::Rook,
    wQueen = PieceType::Queen,
    wKing = PieceType::King,

    blackY = 8,
    bPawn = PieceType::Pawn + blackY,
    bOff = PieceType::Pawn + blackY,
    bKnight = PieceType::Knight + blackY,
    bBishop = PieceType::Bishop + blackY,
    bRook = PieceType::Rook + blackY,
    bQueen = PieceType::Queen + blackY,
    bKing = PieceType::King + blackY,
};

class Color {
    private:
        int r;
        int g;
        int b;
    public:
        Color(int r_in, int g_in, int b_in);
};

class Piece {
    protected:
        static const char symbol = ' ';
        static const int value = 0;
        static const PieceType pieceType = PieceType::None;
    public:
        Color color; // black(0) or white(1)

        Piece(Color &color_in)
        : color(color_in) {}

        virtual char getSymbol() { return symbol; }
        virtual int getValue() { return value; }
        virtual PieceType getPieceType() { return pieceType; }
};

class Pawn : public Piece {
    private:
        static const char symbol = 'P';
        static const int value = 1;
        static const PieceType pieceType = PieceType::Pawn;
        // bool first_move = true;
        // bool en_passant;
    public:
        Pawn(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

class King : public Piece {
    private:
        static const char symbol = 'K';
        static const int value = 0;
        static const PieceType pieceType = PieceType::King;
    public:
        King(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

class Queen : public Piece {
    private:
        static const char symbol = 'Q';
        static const int value = 9;
        static const PieceType pieceType = PieceType::Queen;
    public:
        Queen(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

class Rook : public Piece {
    private:
        static const char symbol = 'R';
        static const int value = 5;
        static const PieceType pieceType = PieceType::Rook;
    public:
        Rook(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

class Bishop : public Piece {
    private:
        static const char symbol = 'B';
        static const int value = 3;
        static const PieceType pieceType = PieceType::Bishop;
    public:
        Bishop(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

class Knight : public Piece {
    private:
        static const char symbol = 'N';
        static const int value = 3;
        static const PieceType pieceType = PieceType::Knight;
    public:
        Knight(Color &color_in)
        : Piece(color_in) {}
        
        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        PieceType getPieceType() override { return pieceType; }
};

#endif PIECE_H