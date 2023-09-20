#include <iostream>
using namespace std;

int main() {
    // Declare variables to store gallons of gas and miles driven
    double gallonsOfGas, milesDriven;

    // Ask the user to enter the number of gallons of gas the car can hold
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallonsOfGas;

    // Ask the user to enter the number of miles the car can be driven on a full tank
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> milesDriven;

    // Calculate miles per gallon (MPG)
    double mpg = milesDriven / gallonsOfGas;

    // Display the result
    cout << "The car's gas mileage is " << mpg << " miles per gallon." << endl;

    return 0;
}
