#include <cstdlib> 
#include <iostream>
#include <ctime>
using namespace std;

void hlDecider(string ch) {

  if (ch == "h") {
    cout << "You have chosen Higher!" << endl << endl;
  }
  else if (ch == "l") {
    cout << "You have chosen Lower!" << endl << endl;
  }
 
}

void paDecider(string ch) {

  if (ch == "y") {
    cout << "Let's go again!" << endl << endl;
  }
  else if (ch == "n") {
    cout << "Thank you for playing!" << endl << endl;
  }

}

int main() { 

  rematch:
  
  srand(time(NULL));
  cout << "This is the first number: ";
  int randomNumber1(rand() % 10 + 1);
  cout << randomNumber1 << endl;

  srand(time_t(rand() % 7 + 7));
  int randomNumber2(rand() % 10 + 1);
  //cout << randomNumber2 << endl;

  retry:
  cout << "Would you like to go higher or lower? Type 'h' for higher, or 'l' for lower: ";

  string userChoice;
  cin >> userChoice;
  clock; hlDecider(userChoice);

  while (userChoice != "h" && userChoice != "l") {
    cout << "Please type that in again..." << endl << endl;
    goto retry;
    break;
  }


  if (randomNumber1 == randomNumber2) {
    cout << "Draw!" << endl << endl;
  }


  if ((randomNumber1 > randomNumber2) && (userChoice == "l")) {
    cout << "You win!" << endl << endl;
  }
  else if ((randomNumber1 > randomNumber2) && (userChoice == "h")) {
    cout << "You lose!" << endl << endl;
  }
  else if ((randomNumber1 < randomNumber2) && (userChoice == "h")) {
    cout << "You win!" << endl << endl;
  }
  else if ((randomNumber1 > randomNumber2) && (userChoice == "l")) {
    cout << "You lose!" << endl << endl;
  }

  retryAgain:

  cout << "Would you like to play again? Type 'y' for yes, or 'n' for no: ";

  string playAgain;
  cin >> playAgain;
  clock; paDecider(playAgain);

  while (playAgain == "y") {
    goto rematch;
    break;
  }

  while (playAgain != "y" && playAgain != "n") {
    cout << "Please type that in again..." << endl << endl;
    goto retryAgain;
    break;
  }
  
}

