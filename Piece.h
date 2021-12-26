#ifndef PIECE_H
#define PIECE_H

#include <string>

class Color {
    private:
        int r, g, b; // r, g, b can only be 0 or 1
    public:
        Color()
        : r(1), g(1), b(1) {} // white

        Color(int n) // n = 0, 1
        : r(n), g(n), b(n) {}

        Color(int r_in, int g_in, int b_in)
        : r(r_in), g(g_in), b(b_in) {}

        bool isWhite() {
            if(r == 1 && g == 1 && b == 1) {
                return true;
            }
            return false;
        }
};

class Piece {
    protected:
        static const char symbol = ' ';
        static const int value = 0;
        bool captured = false;
        bool white;
    public:
        Color color; // black(0) or white(1)

        Piece(Color &color_in)
        : color(color_in) {
            if(color.isWhite()) {
                white = true;
            }
            else{ white = false; }
        }

        virtual char getSymbol() { return symbol; }
        virtual int getValue() { return value; }
        virtual bool isCaptured() { return captured; }
        virtual bool isWhite() { return white; }
        virtual void setCaptured(bool c) {
            captured = c;
        }
};

class Pawn : public Piece {
    private:
        static const char symbol = 'P';
        static const int value = 1;
    public:
        Pawn(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
};

class King : public Piece {
    private:
        static const char symbol = 'K';
        static const int value = 0;
        bool castled = false;
    public:
        King(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
        bool isCastled() { return castled; }
        bool setCastled(bool c) {
            castled = c;
        }
};

class Queen : public Piece {
    private:
        static const char symbol = 'Q';
        static const int value = 9;
    public:
        Queen(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
};

class Rook : public Piece {
    private:
        static const char symbol = 'R';
        static const int value = 5;
    public:
        Rook(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
};

class Bishop : public Piece {
    private:
        static const char symbol = 'B';
        static const int value = 3;
    public:
        Bishop(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
};

class Knight : public Piece {
    private:
        static const char symbol = 'N';
        static const int value = 3;
    public:
        Knight(Color &color_in)
        : Piece(color_in) {}

        char getSymbol() override { return symbol; }
        int getValue() override { return value; }
};

#endif PIECE_H