#include "cards.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  // Card c1(10);
  // Card c2(35);
  // cout << c1.suit() << endl;
  // cout << c2.suit() << endl;
  // for (int i = 0; i < 52; i++) {
  //   Card c(i);
  //   cout << c.suit();
  // }
  // cout << endl;
  // for (int i = 0; i < 52; i++) {
  //   Card c(i);
  //   cout << c.value();
  // }
  // cout << endl;
  // for (int i = 0; i < 52; i++) {
  //   Card c(i);
  //   cout << " " << c.str();
  // }
  // cout << endl;
  // Card c;
  // cout << c.str() << endl;

  // Deck d;
  // d.shuffle();
  // while (d.size() > 0)
  //   cout << " " << d.deal().str();
  // cout << endl;

  //Card c1;
  //Card c2(10);

  Deck d;
  d.shuffle();
  Hand h;
  for (int i = 0; i < 7; i++) {
    h.insert(d.deal());
    cout << h.str() << endl;
  }
  
}
