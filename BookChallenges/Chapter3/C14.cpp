#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Constants for tax rates
    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.02;
    const double TOTAL_TAX_RATE = 0.06;

    // Declare variables for month, year, and total collected
    string month, year;
    double totalCollected;

    // Ask the user to enter the month, year, and total collected
    cout << "Enter the month: ";
    getline(cin, month);
    cout << "Enter the year: ";
    getline(cin, year);
    cout << "Enter the total collected (including sales and sales tax): $";
    cin >> totalCollected;

    // Calculate sales, county sales tax, state sales tax, and total sales tax
    double sales = totalCollected / (1 + TOTAL_TAX_RATE);
    double countySalesTax = sales * COUNTY_TAX_RATE;
    double stateSalesTax = sales * STATE_TAX_RATE;
    double totalSalesTax = countySalesTax + stateSalesTax;

    // Display the report
    cout << "Month: " << month << endl;
    cout << "--------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Collected: $" << totalCollected << endl;
    cout << "Sales: $" << sales << endl;
    cout << "County Sales Tax: $" << countySalesTax << endl;
    cout << "State Sales Tax: $" << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}
