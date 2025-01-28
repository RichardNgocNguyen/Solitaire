# Solitaire

## Description
A program with create, shuffle, and display deck test functions. Fibonacci Solitaire is a game where the goal is to create piles that add up to any fibonacci number and there is no remaining cards left in the deck.

```
        Fibonacci Solitaire!

7S QS 10D 2D 8H JH 3C 3S 6S KH QH JC (Fib: 89)
4S AS (Fib: 5)
5C (Fib: 5)
5H (Fib: 5)
KC 5S 3D 4D 6H QD 9S 10H 8D 10C 9D JD 2H AD QC 6C 4C 8S 10S AC 7H 9C JS KS 4H 2C KD 7C 5D 3H 7D 2S AH 6D 8C 9H
Loser! You have lost in 5 piles! You have played 20 time(s).
Press Y to continue! y


        Fibonacci Solitaire!

KD 7H KC 5D 10H 9D 7S 9H JD 3S KS 8H 6C 10D 8S 5S QD 4H 7D AH 9S 5C JS QH 6D 9C 7C 5H QS 2C 3C 4S 6H JH 10C 8D 6S KH 4C AS 2D JC 3H 4D 2H 3D AD AC 8C QC 2S 10S
Loser! You have lost in 1 piles! You have played 21 time(s).
Press Y to continue! y


        Fibonacci Solitaire!

2C (Fib: 2)
AC (Fib: 1)
4C 6C 9H 10D JC JD 4D 7H 5S 10H KC 6D 5H 5C 3S 7C 5D QD KH JH 8D 6H 10C QH AD 7D 4S 3H 8C JS QS 4H KD 3D 2D 8S 10S 9S 2S 8H QC 2H 9D 6S 9C 3C AH AS 7S KS (Fib: 337)

Winner! You have won in 3 piles! You have played 22 times
Press Y to continue!
```

## Getting Started
To compile, type in the terminal: <br>
(Windows)
```
g++ -o app.exe FiboSolitaire.cpp Deck.cpp Card.cpp
```
(MacOS)
```
g++ -o app.out FiboSolitaire.cpp Deck.cpp Card.cpp
```
To run, double-click the executable or navigate to the working directory of executable and type:
```
./app
```
