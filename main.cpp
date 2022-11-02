#include <iomanip>
#include <iostream>

using namespace std;

////////////////////////// Main Code /////////////////////////
int main() {
  // declare variables
  double MPG;
  double AVG;
  double countMiles = 0;
  double countGals = 0;

  // declare stuct
  struct Car {
    int CarNo;
    double Miles;
    double GalUsed;
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
  //for (int j = 0; j < 5; j++) {
    for (int k = 0; k < 5; k++) {
      MPG = (CarInfo[k].Miles) / (CarInfo[k].GalUsed);

      cout << "Car number " << CarInfo[k].CarNo << " gets " << fixed
           << showpoint << setprecision(2) << MPG << " miles per gallon. "
           << endl;
      
      countMiles += CarInfo[k].Miles;
    countGals += CarInfo[k].GalUsed;
    }
    
  //}
  AVG = (countMiles) / (countGals);

  cout << "The average MPG for the entire fleet of cars is " << AVG << endl;
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