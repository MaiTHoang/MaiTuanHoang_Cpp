#include <iostream>
using namespace std;

int main() {
    // Constants for the amounts of ingredients per 48 cookies
    const double SUGAR_PER_48_COOKIES = 1.5;
    const double BUTTER_PER_48_COOKIES = 1.0;
    const double FLOUR_PER_48_COOKIES = 2.75;

    // Declare variables to store the number of cookies the user wants to make
    int numCookies;

    // Ask the user how many cookies they want to make
    cout << "Enter the number of cookies you want to make: ";
    cin >> numCookies;

    // Calculate the amount of each ingredient needed for the specified number of cookies
    double sugarNeeded = (numCookies / 48.0) * SUGAR_PER_48_COOKIES;
    double butterNeeded = (numCookies / 48.0) * BUTTER_PER_48_COOKIES;
    double flourNeeded = (numCookies / 48.0) * FLOUR_PER_48_COOKIES;

    // Display the amounts of each ingredient needed
    cout << "For " << numCookies << " cookies, you will need:" << endl;
    cout << "Sugar: " << sugarNeeded << " cups" << endl;
    cout << "Butter: " << butterNeeded << " cups" << endl;
    cout << "Flour: " << flourNeeded << " cups" << endl;

    return 0;
}
