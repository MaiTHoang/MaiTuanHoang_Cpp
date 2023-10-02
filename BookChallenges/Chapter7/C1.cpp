#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a[SIZE];
    for (int &val : a)
    {
        cout << "Enter an integer number: ";
        cin >> val;
    }
    int largest = a[0], 
        smallest = a[0];
    for (int index = 0; index < SIZE; index++)
    {
        if (a[index] > largest)
        {
            largest = a[index];
        }
        if (a[index] < smallest)
        {
            smallest = a[index];
        }
    }
    
    cout << "Largest number is " << largest << endl;
    cout << "Smallest number is " << smallest << endl;
    
    return 0;
}