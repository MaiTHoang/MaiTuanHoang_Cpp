#include<iostream>
using namespace std;
int main()
{
    int riseLevel = 1;
    for (int i =1;i<=25;i++)
    {
        riseLevel *=i;
        cout << "The ocean will have risen in year " << i 
             << " is: " << riseLevel << endl;
    }
    return 0;
}