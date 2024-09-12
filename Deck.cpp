#include "Deck.h"
#include "Card.h"
#include <iostream>

using namespace std;

Deck::Deck(){
  top = 0;
  int increase = 0;
  Card cards;
  char suit[4] = {'S','H','D','C'};
  char rank[13] = {'A','2','3','4','5','6','7','8','9','T','Q','J','K'};
  for (int i = 0;i < 4; i++){
    for (int j = 0;j < 13;j++){
      cards.setCard(rank[j], suit[i]);
      c[increase] = cards;
      increase++;
    }
  }
}
              

void Deck::refreshDeck(){
  int inc = 0;
  Card cards;
  char suit[4] = {'S','H','D','C'};
  char rank[13] = {'A','2','3','4','5','6','7','8','9','T','Q','J','K'};
  for (int i = 0;i < 4; i++){
    for (int j = 0;j < 13;j++){
      c[inc].setCard(rank[j], suit[i]);
      inc ++;
    }
  }
}

Card Deck::deal(){
  return c[top++]; 
}

void Deck::shuffle(){
  srand(time(NULL));
  for (int i = 0; i < 10000; i++){
    int x = rand() % 52;
    int y = rand() % 52;
    Card temp = c[x];
    c[x] = c[y];
    c[y] = temp; 
  }
}

void Deck::isEmpty(){
  if (top > 51) {
    top = 0;
  }
}

void Deck::display(){
  for (int i = 0; i < 52; i++) {
    if (i % 13 == 0){
      cout << endl;
    } 
    c[i].display();
  }
  cout << endl;
}