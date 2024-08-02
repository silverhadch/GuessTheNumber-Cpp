#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  cout << endl;
  cout << "Guess the number! You have 3 attempts!" << endl;
  cout << "The Secret Number is between 1-10!" << endl;
  //makes a seed based on the Unix-Timestamp so every round is as random as is.
  srand(time(0));
  //Random number gen
  int secretn = rand() % 10 + 1;
  //Attempt counter
  int attempt = 1;
  while (true) {
    //If all 3 Attemps are used you lose
    if (attempt == 4) {
      cout << endl << endl << "You lost! Try again next Time! )-: ";
      break;
    };
    //Shows Attempt
    cout << endl << attempt << ". Attempt!" << endl;
    int guess;
    cout << "Type your Guess: ";
    //Takes your input
    cin >> guess;
    attempt++;
    //if won break else new Attempt
    if (guess == secretn) {
      cout << endl << endl << "You won!!! Congrats! (-;";
      break;
    } else {
      //calculates your attempts left
      int attmpleft = 4 - attempt;
      cout << endl
           << "Aww, Dang it! You have " << attmpleft << " Try(s) left!" << endl;
    };
  };
  cout << endl;

  return 0;
}
