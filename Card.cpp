#include "Card.h"
#include <iostream>

using namespace std;

Card::Card(){}

Card::Card(char r, char s){
  rank = r;
  suit = s;
}
void Card::setCard(char r, char s){
  rank = r;
  suit = s;
}
int Card::getValue(){
  int a = 0;
  if (rank == 'A'){
    a = 1;
  }
  else if (rank == '2'){
    a = 2;
  }
  else if (rank == '3'){
    a = 3;
  }
  else if (rank == '4'){
    a = 4;
  }
  else if (rank == '5'){
    a = 5;
  }
  else if (rank == '6'){
    a = 6;
  }
  else if (rank == '7'){
    a = 7;
  }
  else if (rank == '8'){
    a = 8;
  }
  else if (rank == '9'){
    a = 9;
  }
  else if (rank == 'T'){
    a = 10;
  }
  else if (rank == 'Q'){
    a = 10;
  }
  else if (rank == 'J'){
    a = 10;
  }
  else if (rank == 'K'){
    a = 10;
  }
  return a;
  
}

void Card::display(){
  if (rank == 'T'){
    cout << "10" << suit << " ";
  }
  else{
    cout << rank << suit << " ";
  }
}

