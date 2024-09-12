#ifndef DECK_H
#define DECK_H

#include <string>
#include "Card.h"
using namespace std;

class Deck
{
  private:
    Card c[52];
    int top;
  public:
    Deck(); 
    void refreshDeck();
    Card deal();
    void shuffle();
    void isEmpty();
    void display();
};


#endif