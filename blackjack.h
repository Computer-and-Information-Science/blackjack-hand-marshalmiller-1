#pragma once
#include "cards.h"


Class BlackjackHand : public Hand {
  public:
  int score() const;
};


int play (Deck& deck, int wager;
