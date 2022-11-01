#include <iostream>

using namespace std;

////////////////////////// Main Code /////////////////////////
int main() {
  // declare variables
  double MPG, AVG;

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

  // loop for car's mpg
  for (int k = 0; k < 5; k++) {
    MPG = (CarInfo[k].Miles) / (CarInfo[k].GalUsed);

    cout << "Car number " << CarInfo[k].CarNo << " gets " << MPG
         << " miles per gallon. " << endl;
  }
}














/* //////////////////// User Defined Functions //////////////////

// User defined function to find each car's miles per gal and average miles per
gal for entire fleet

void CarReport(Car) {

  // declare variables used inside function
  double MPG;

  // loop to determin MPG for each
  for (int i = 0; i < 5; i++){
    MPG = Car[0].Carno
  }
  }
*/