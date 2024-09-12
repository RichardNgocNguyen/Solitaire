#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;

Deck d;
int win = 0;

int main() {
  int input = 0;
  
  while (input != 5 && input < 5) {
    cout << "\t" << "Welcome to Fibonacci Solitaire" << endl;
    cout << "1. New Deck"<< endl;
    cout << "2. Display Deck" << endl;
    cout << "3. Shuffle Deck" << endl;
    cout << "4. Play Solitaire" << endl;
    cout << "5. Exit" << endl;
    cin >> input;
    if (input == 1) {
      d.refreshDeck();
    }
    else if (input == 2) {
      d.display();
    }
    else if (input == 3) {
      d.shuffle();
    }
    else if (input == 4) {
      char player = 'y';
      int games = 0;
      int currCard = 0;
      int fib[13] = {1,2,3,5,8,13,21,43,55,89,144,233,337};
      
      while (player == 'y' || player == 'Y'){
        cout << "\n\n\tFibonacci Solitaire! \n\n";
        games++;
        int piles = 1;
        int sum_fib = 0;
        while (currCard < 52){
          Card s = d.deal();
          s.display();
          sum_fib += s.getValue();

          for (int i = 0;i < 13; i++){
            int fibonacci = fib[i];
            if (sum_fib == fibonacci){
              cout << "(Fib: " << sum_fib << ")";
              cout << "\n";
              piles++;
              sum_fib = 0;
              if (currCard == 51){
                cout << "\nWinner! You have won in " << piles - 1 << " piles! ";
                cout << "You have played " << games << " times\n";
                cout << "Press Y to continue! ";
                win = 1;
                
                }
              }
          }
          currCard++;
        
          

        }
        if (win == 0) {
          cout << "\n";
          cout << "Loser! You have lost in " << piles << " piles! You have played " << games << " time(s).\n";
          cout << "Press Y to continue! ";
        }
        win = 0;
        
      
        cin >> player;
        if (player == 'y' || player == 'Y'){
          d.isEmpty();
          currCard = 0;
          d.shuffle();
        }
      }
    }
    else if (input == 5) {
      cout << "GoodBye! Thanks for Playing!" << endl;
    }

  }
}
