#include<iostream>
using namespace std;
int main()
{
    float time,speed;
    float distance;
    
    cout << "Enter the speed of vehicle: ";
    cin >> speed;
    cout << "Enter how many hours vehicle has traveled: ";
    cin >> time;


    while (time<0 || speed<0)
    {   
        cout << "You have to enter the speed or time traveled greater than 0";
        cout << "Please enter again";
        cout << "Enter the speed of vehicle: ";
        cin >> speed;
        cout << "Enter how many hours vehicle has traveled: ";
        cin >> time;
    }

    for (int i=1; i<=time;i++)
    {
        distance=speed*i;
        cout << " The distance a vihicle can travels in " << i 
        << " hours is " << distance << endl;
    }
    return 0;
}