// Note: There is no Player.cpp file.
// The player class is simple enough to
// implement everything in Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
private:
  Hand hand;
  int score;
public:
  Player();
  Player(Deck deck, int N);
};


#endif // PLAYER_H_
