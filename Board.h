#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

class Square {
    private:
        Piece *p;
        int x, y;
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

        void setXY(int x_in, int y_in) {
            x = x_in;
            y = y_in;
        }
};

class Board {
    private:
        std::vector<Square *> boxes;
    public:
        Board() {
            resetBoard();
        }

        void resetBoard() {
            boxes.clear();

            Color white(1);
            Square * a1 = new Square;
            a1->setPiece(new Rook(white));
            a1->setXY(0, 0);
            boxes.push_back(a1);

            Square * b1 = new Square;
            b1->setPiece(new Knight(white));
            b1->setXY(0, 1);
            boxes.push_back(b1);

            Square * c1 = new Square;
            c1->setPiece(new Bishop(white));
            c1->setXY(0, 2);
            boxes.push_back(c1);

            Square * d1 = new Square;
            d1->setPiece(new Queen(white));
            d1->setXY(0, 3);
            boxes.push_back(d1);

            Square * e1 = new Square;
            e1->setPiece(new King(white));
            e1->setXY(0, 4);
            boxes.push_back(e1);

            Square * f1 = new Square;
            f1->setPiece(new Bishop(white));
            f1->setXY(0, 5);
            boxes.push_back(f1);

            Square * g1 = new Square;
            g1->setPiece(new Knight(white));
            g1->setXY(0, 6);
            boxes.push_back(g1);

            Square * h1 = new Square;
            h1->setPiece(new Rook(white));
            h1->setXY(0, 7);
            boxes.push_back(h1);

            for(int y = 0; y < 8; ++y) {
                Square * p2 = new Square;
                p2->setPiece(new Pawn(white));
                p2->setXY(1, y);
                boxes.push_back(p2);
            }

            for(int i = 2; i < 7; ++i) {
                for(int j = 0; j < 8; ++j) {
                    Square * s = new Square;
                    s->setXY(i, j);
                    boxes.push_back(s);
                }
            }

            Color black(0);
            for(int y = 0; y < 8; ++y) {
                Square * p7 = new Square;
                p7->setPiece(new Pawn(black));
                p7->setXY(6, y);
                boxes.push_back(p7);
            }

            Square * a8 = new Square;
            a8->setPiece(new Rook(black));
            a8->setXY(7, 0);
            boxes.push_back(a8);

            Square * b8 = new Square;
            b8->setPiece(new Knight(black));
            b8->setXY(7, 1);
            boxes.push_back(b8);

            Square * c8 = new Square;
            c8->setPiece(new Bishop(black));
            c8->setXY(7, 2);
            boxes.push_back(c8);

            Square * d8 = new Square;
            d8->setPiece(new Queen(black));
            d8->setXY(7, 3);
            boxes.push_back(d8);

            Square * e8 = new Square;
            e8->setPiece(new King(black));
            e8->setXY(7, 4);
            boxes.push_back(e8);

            Square * f8 = new Square;
            f8->setPiece(new Bishop(black));
            f8->setXY(7, 5);
            boxes.push_back(f8);

            Square * g8 = new Square;
            g8->setPiece(new Knight(black));
            g8->setXY(7, 6);
            boxes.push_back(g8);

            Square * h8 = new Square;
            h8->setPiece(new Rook(black));
            h8->setXY(7, 7);
            boxes.push_back(h8);
        }
};

#endif BOARD_H