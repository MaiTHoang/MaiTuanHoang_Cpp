#include<iostream>
using namespace std;
int main()
{
    float caloBurned = 3.6;
    float totalCaloBurned ; 
    for (int i=1;i<=30;i++)
    {
        totalCaloBurned = caloBurned *i;
        if(i%5==0)
        {
            cout << "Total calo burned every " << i
            << " minutes is " << totalCaloBurned   << endl;
        }
    }
    return 0;
}