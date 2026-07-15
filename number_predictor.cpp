#include<iostream>
#include<stdio.h>
#include<ctime>
using namespace std;

int main(){
    int secretNumber, guess;
    
    // Send the random number number generator with current time 
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    
    cout << "Guess the Number Game!" <<endl;
    cout << "I am thinking a number a number between 1 to 100" << endl;

    // Lopp until correct Guess
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > secretNumber) {
            cout << "Too high! Try again." <<endl;
        } 
        else if( guess < secretNumber) {
            cout << "Too low! Try Again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the numer correctly!" << endl;
        }

     } while(guess != secretNumber);

    return 0;

    
}