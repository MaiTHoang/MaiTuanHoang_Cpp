#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for property assessment rate and property tax rate
    const double ASSESSMENT_RATE = 0.60;
    const double PROPERTY_TAX_RATE = 0.0075;  // 75¢ for each $100

    // Declare variables for actual value, assessment value, and property tax
    double actualValue, assessmentValue, propertyTax;

    // Ask the user to enter the actual value of the property
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate the assessment value
    assessmentValue = actualValue * ASSESSMENT_RATE;

    // Calculate the property tax
    propertyTax = assessmentValue * PROPERTY_TAX_RATE;

    // Display the assessment value and property tax
    cout << fixed << setprecision(2);
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}
