#include<iostream>
using namespace std;
int main()
{
    cout <<" Celsius to Fahrenheit Table\n";
    cout << "---------------------------------\n";
    for (int i =0;i<=20;i++)
    {
        double F=(double)(i*9/5)+32;
        cout << "A Celsius temperature " << i 
             <<" converts to Fahrenheit: "<< F << endl;
    }
    return 0;   
}