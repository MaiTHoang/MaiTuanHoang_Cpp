#include <iostream>
using namespace std;

int main() {
    // Constant for the weight of each widget
    const double WIDGET_WEIGHT = 12.5;

    // Declare variables to store pallet weights
    double palletWeight, totalWeight;

    // Ask the user to enter the weight of the pallet by itself
    cout << "Enter the weight of the pallet by itself (in pounds): ";
    cin >> palletWeight;

    // Ask the user to enter the total weight of the pallet with widgets
    cout << "Enter the total weight of the pallet with widgets (in pounds): ";
    cin >> totalWeight;

    // Calculate the number of widgets stacked on the pallet
    int numWidgets = static_cast<int>((totalWeight - palletWeight) / WIDGET_WEIGHT);

    // Display the number of widgets stacked on the pallet
    cout << "The number of widgets stacked on the pallet is: " << numWidgets << endl;

    return 0;
}
