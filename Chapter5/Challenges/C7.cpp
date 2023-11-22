#include<iostream>
using namespace std;
int main()
{
    int day,
        totalSalary, 
        salary = 1;
    cout << "Enter number of days: ";
    cin >> day;
    
    for (int i=1;i<=day;i++)
    {
        if( i==1)
        {
            salary=1;
            totalSalary += salary;
        }
        salary*=2;
        totalSalary += salary;
    }
    cout << "Total salary is $" << totalSalary ; 
    return 0;
}