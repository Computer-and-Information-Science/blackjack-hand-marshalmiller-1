#include "blackjack.h"
#include <iostream>
using namespace std;

int BlackjackHand::score() const {
  int total_score = 0;
  for (int i = 0; i < size(); i++) {
    Card c = card(i);
    switch (c.value()) {
      case 'T':
      case 'J':
      case 'Q':
      case 'K':
        total_score += 10;
        break;
      case 'A':
        total_score += 11;
        break;
      case '*':
        break;
      default:
        total_score += c.value() - '0';
    }
  }
  for (int i = 0; i < size(); i++)
    if (card(i).value() == 'A' && total_score > 21)
      total_score -= 10;
  return total_score;
}

int play (Deck& deck, int wager) {
  Hand dealer;
  Hand player;
  // Deal 2 cards to dealer and player
  player.insert(deck.deal());
  dealer.insert(deck.deal());
  player.insert(deck.deal());
  dealer.insert(deck.deal());
  // Show one of dealer's cards
  cout << "Dealer: " << dealer.card(0) << "-??\n";
  cout << "Player: " << player.str() << endl;
}
