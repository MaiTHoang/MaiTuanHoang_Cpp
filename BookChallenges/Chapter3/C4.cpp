#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store month names and rainfall amounts
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    // Ask the user to enter the name of each month and its rainfall amount
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rainfall (in inches) for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rainfall (in inches) for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rainfall (in inches) for " << month3 << ": ";
    cin >> rainfall3;

    // Calculate the average rainfall
    double averageRainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Display the average rainfall with two decimal places
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << averageRainfall << " inches." << endl;

    return 0;
}
