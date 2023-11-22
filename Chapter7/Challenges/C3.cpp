#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;
    string salsaTypes[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int salsaAmounts[SIZE];

    for (int index = 0;index < SIZE;index++)
    {
        cout << "Enter the numbers of " << salsaTypes[index] 
             << " jars sold: ";
        cin >> salsaAmounts[index];
    }

    double totalSales;
    for (int index = 0; index < SIZE; index++)
    {
        totalSales += salsaAmounts[index];
    }

    int highestSelling = salsaAmounts[0];
    string highestType;
    int lowestSelling = salsaAmounts[0];
    string lowestType;

    for (int index = 0;index < SIZE;index++)
    {
        if (salsaAmounts[index] > highestSelling)
        {
            highestSelling = salsaAmounts[index];
            highestType = salsaTypes[index];
        }  
        if (salsaAmounts[index] < lowestSelling)
        {
            lowestSelling = salsaAmounts[index];
            lowestType = salsaTypes[index];
        }
    }

    cout << "Total sales: " << totalSales << endl;
    cout << "The highest selling product in the past month is " 
         << highestType << " : " << highestSelling << endl;
    cout << "The lowest selling product in the past month is "
         << lowestType << " : " << lowestSelling << endl;
    return 0;
}