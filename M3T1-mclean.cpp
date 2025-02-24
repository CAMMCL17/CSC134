// CSC 134
// M3Lab1
// Chayse
// 2/24/2025



// if statement example2
// standard header


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "You're in a the super bowel!  Eagles vs. Chiefs." << endl;
  cout << "1. Fight" << endl;
  cout << "2. Run"   << endl;
  cout << "Type 1 or 2, or 3: ";
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose to fight" << endl;
    cout << "Sadly, you lose. " << endl;
  }
  else if (2 == choice) {
  	cout << "You chose to run" << endl;
    cout << "You live to fight another day." << endl;
  }
  else if (3 == choice) {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method