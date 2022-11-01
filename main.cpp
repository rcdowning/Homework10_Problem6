#include <iostream>

using namespace std;

/////////////////////// Function Prototype ////////////////////

////////////////////////// Main Code /////////////////////////
int main() {

  // declare stuct
  struct Car {
    int CarNo;
    int Miles;
    int GalUsed;
  };

  // array of 5 structs to accept user input
  Car CarInfo[5];

  // for statement to loop through user input
  for (int i = 0; i < 5; i++) {
    cout << "Please enter the info for the car. " << endl;
    cout << "Car Number: ";
    cin >> CarInfo[i].CarNo;
    cout << "Miles: ";
    cin >> CarInfo[i].Miles;
    cout << "Gallons Used: ";
    cin >> CarInfo[i].GalUsed;
    cout << endl;
  }

  //
}

///////////////////// User Defined Functions //////////////////

// User defined function to find each car's miles per gal and average miles per
// gal for entire fleet