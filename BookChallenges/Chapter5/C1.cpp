#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter positive integer value: ";
    cin >> n;
    while(n<0)
    {
        cin >> n;
    }
    
    int sum;
    cout << "The sum of all the integers is ";
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout << sum;
    return 0;
}