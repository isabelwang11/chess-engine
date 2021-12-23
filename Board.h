#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

class Square {
    private:
        Piece *p;
        const int x, y;
    public:
        Square()
        : x(0), y(0), p(nullptr) {}

        Square(Piece *piece_in, int &x_in, int &y_in)
        : x(x_in), y(y_in), p(piece_in) {}

        Piece * getPiece() {
            return p;
        }
        
        void setPiece(Piece *piece_in) {
            p = piece_in;
        }
};

class Board {
    private:
        const int board_size = 64;
        Square * boxes = new Square[board_size];
    public:
        Board() {
            resetBoard();
        }

        void resetBoard() {
            Color white(1);
            Rook r(white);
            Square s(&r, 0, 0);
            boxes[0] = s;
            boxes[1] = new Square(new Knight(white), 0, 1);
            boxes[2] = new Square(new Bishop(white), 0, 2);
            boxes[3] = new Square(new Queen(white), 0, 3);
            boxes[4] = new Square(new King(white), 0, 4);
            boxes[5] = new Square(new Bishop(white), 0, 5);
            boxes[6] = new Square(new Knight(white), 0, 6);
            boxes[7] = new Square(new Rook(white), 0, 7);

            boxes[8] = new Square(new Pawn(white), 1, 0);
            boxes[9] = new Square(new Pawn(white), 1, 1);
            boxes[10] = new Square(new Pawn(white), 1, 2);
            boxes[11] = new Square(new Pawn(white), 1, 3);
            boxes[12] = new Square(new Pawn(white), 1, 4);
            boxes[13] = new Square(new Pawn(white), 1, 5);
            boxes[14] = new Square(new Pawn(white), 1, 6);
            boxes[15] = new Square(new Pawn(white), 1, 7);

            Color black(0);
            boxes[56] = new Square(new Rook(black), 7, 0);
            boxes[57] = new Square(new Knight(black), 7, 1);
            boxes[58] = new Square(new Bishop(black), 7, 2);
            boxes[59] = new Square(new Queen(black), 7, 3);
            boxes[60] = new Square(new King(black), 7, 4);
            boxes[61] = new Square(new Bishop(black), 7, 5);
            boxes[62] = new Square(new Knight(black), 7, 6);
            boxes[63] = new Square(new Rook(black), 7, 7);

            boxes[48] = new Square(new Pawn(black), 6, 0);
            boxes[49] = new Square(new Pawn(black), 6, 1);
            boxes[50] = new Square(new Pawn(black), 6, 2);
            boxes[51] = new Square(new Pawn(black), 6, 3);
            boxes[52] = new Square(new Pawn(black), 6, 4);
            boxes[53] = new Square(new Pawn(black), 6, 5);
            boxes[54] = new Square(new Pawn(black), 6, 6);
            boxes[55] = new Square(new Pawn(black), 6, 7);

            for(int i = 2; i < 6; ++i) {
                for(int j = 0; j < 8; ++j) {
                    boxes[i * 8 + j] = new Square();
                }
            }
        }
};

#endif BOARD_H