// THis program displays the largest and smallest numbers entered
#include <iostream>
using namespace std;

int main()
{
    int num, 
        largest = INT_MIN, 
        smallest = INT_MAX;

    cout << "Enter a series of integer (-99 to end): \n";
    while (true)
    {
        cout << "Enter an integer: ";
        cin >> num;
        if (num == -99)
        {
            break;
        }
  
        if (num > largest)
       {
            largest = num;
       }
   
       if (num < smallest)
        {
            smallest = num;
        }
    }
    cout << "The largest of series of integer entered is " << largest << endl;
    cout << "The smallest of series of integer entered is " << smallest << endl;
    return 0;
}