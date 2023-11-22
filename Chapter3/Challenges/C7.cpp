#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Constants for ticket prices and revenue percentage
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double REVENUE_PERCENTAGE = 0.2;  // 20% to the theater, 80% to the distributor

    // Declare variables to store movie name and ticket counts
    string movieName;
    int adultTicketsSold, childTicketsSold;

    // Ask the user to enter the movie name and ticket counts
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    // Calculate gross box office profit
    double grossBoxOfficeProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);

    // Calculate net box office profit and amount paid to the distributor
    double netBoxOfficeProfit = grossBoxOfficeProfit * REVENUE_PERCENTAGE;
    double amountPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Display the report
    cout << "Movie Name: \"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << fixed << setprecision(2);  // Set the output format to display dollars with two decimal places
    cout << "Gross Box Office Profit: $ " << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit: $ " << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: $ " << amountPaidToDistributor << endl;

    return 0;
}
