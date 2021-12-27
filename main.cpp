#include "Piece.h"
#include "Board.h"
#include "Player.h"

class Move {
    private:
        Player player;
        Square * start;
        Square * end;
        Piece * pieceMoved;
        Piece * pieceCaptured;
        bool castlingMove = false;
    public:
        Move(Player &p, Square *s, Square *e)
        : player(p), start(s), end(e) {
            pieceMoved = start->getPiece();
        }

        bool isCastlingMove() { return castlingMove; }
        void setCastlingMove(bool cm) { castlingMove = cm; }
};

enum GameStatus {
    ACTIVE,
    BLACK_WIN,
    WHITE_WIN,
    FORFEIT,
    STALEMATE,
    CHECKMATE,
};

class Game {
    //
};

int main() {
    //
}