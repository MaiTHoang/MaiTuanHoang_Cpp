#include <iostream>
using namespace std;

int main() {
    // Declare variables for monthly expenses
    double loanPayment, insurance, gas, oil, tires, maintenance;

    // Ask the user to enter monthly expenses
    cout << "Enter the monthly loan payment: $";
    cin >> loanPayment;

    cout << "Enter the monthly insurance cost: $";
    cin >> insurance;

    cout << "Enter the monthly gas cost: $";
    cin >> gas;

    cout << "Enter the monthly oil cost: $";
    cin >> oil;

    cout << "Enter the monthly tires cost: $";
    cin >> tires;

    cout << "Enter the monthly maintenance cost: $";
    cin >> maintenance;

    // Calculate total monthly expenses
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;

    // Calculate total annual expenses
    double totalAnnualCost = totalMonthlyCost * 12;

    // Display the total monthly and annual expenses
    cout << "Total Monthly Expenses: $" << totalMonthlyCost << endl;
    cout << "Total Annual Expenses: $" << totalAnnualCost << endl;

    return 0;
}
