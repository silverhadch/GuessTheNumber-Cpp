#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ostream>
using namespace std;

int main () {
  cout << endl;
  cout << "Guess the number! You have 3 attempts!" << endl;
  cout << "The Secret Number is between 1-10!" << endl;
  srand(time(0));
  int secretn = rand() % 10 + 1;
  int attempt = 1;
  while (true) {
    if (attempt == 4) {
      cout << endl << endl << "You lost! Try again next Time! )-: ";
      break;
    };
    cout << endl << attempt <<". Attempt!" << endl;
    int guess;
    cout << "Type your Guess: ";
    cin >> guess;
    attempt++;
    if (guess == secretn) {
      cout << endl << endl << "You won!!! Congrats! (-;";
      break;
    } else {
      int attmpleft = 4 - attempt;
      cout << endl << "Aww, Dang it! You have " << attmpleft << " Try(s) left!" << endl;
    };
  };
  cout << endl;

  return 0;
}
