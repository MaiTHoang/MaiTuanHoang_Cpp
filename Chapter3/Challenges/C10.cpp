#include <iostream>
using namespace std;

int main() {
    // Declare variables for replacement cost and minimum insurance amount
    double replacementCost, minimumInsurance;

    // Ask the user to enter the replacement cost of the building
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum insurance amount (80% of the replacement cost)
    minimumInsurance = 0.8 * replacementCost;

    // Display the minimum insurance amount
    cout << "You should buy at least $" << minimumInsurance << " of insurance for the property." << endl;

    return 0;
}

