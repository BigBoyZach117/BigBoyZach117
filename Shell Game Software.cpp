//Zachariah Hunt
//Shell Game
/* This program will simulate a shell game that allows the user to guess a ran-
 dom number atleast five iterations worth. */
 
#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    //Declare variables here.
    
    int computerGuess, userGuess, loopCounter, cashTotal, winAmount, lossAmount;
    
    //Inform the user on the nature of this program as well as the purpose.
    
    cout << "Hello, thank you for playing this shell game. ";
   
    cout << "The goal of this game is to guess the right number correctly, ";
    cout << "and to gain as much money as you can in the end. Good luck!" << endl;
    //*************************************************************************
    cout << "\nThe rules are simple, you have five tries to guess the correct ";
    cout << "number from the values of 1 - 3. These values will be random ";
    cout << "on each given attempt. ";
    cout << "If you win, you will receive $1. If you lose, you will owe $2." << endl;
    
    //Begin the for loop and prompt the user to enter an input.
    
    cashTotal = 0;
    winAmount = 1;
    lossAmount = -2;
    for (loopCounter = 0; loopCounter < 5; loopCounter++)
    {
        computerGuess = (rand() % 3) + 1;
        
        cout << "\nPlease enter you guess: ";
        cin >> userGuess;
        cout << endl;
        
        if (userGuess != computerGuess)
        {
            cout << "You have guessed incorrectly. :-(\n";
            cout << "The correct guess would have been." << " " << computerGuess;
            cout << endl;
            cashTotal += lossAmount;
        }
        else
        {
            cout << "You have guessed correctly. :-)";
            cashTotal += winAmount;
        }
    }
    
    cout << "\nYour total after the given attempts is $" << cashTotal << endl;
 
    cout << endl;
    return 0;
}

