#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for conversion rates
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Declare variables for dollar amount, yen amount, and euro amount
    double dollars, yen, euros;

    // Ask the user to enter the dollar amount
    cout << "Enter the dollar amount: $";
    cin >> dollars;

    // Convert dollars to yen and euros
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    // Set the output format to display currency amounts with two decimal places
    cout << fixed << setprecision(2);

    // Display the converted amounts
    cout << "Amount in yen: " << yen << " Yen" << endl;
    cout << "Amount in euros: " << euros << " Euros" << endl;

    return 0;
}
