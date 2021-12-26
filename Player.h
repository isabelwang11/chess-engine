#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        bool isWhitePlayer;
        bool isHumanPlayer;
    public:
        Player(bool &isWhite_in)
        : isWhitePlayer(isWhite_in), isHumanPlayer(false) {}
};

class HumanPlayer : public Player {
    public:
        HumanPlayer(bool &isWhite_in)
        : Player(isWhite_in) {}
};

class ComputerPlayer: public Player {
    public:
        ComputerPlayer(bool &isWhite_in)
        : Player(isWhite_in) {}
};

#endif PLAYER_H