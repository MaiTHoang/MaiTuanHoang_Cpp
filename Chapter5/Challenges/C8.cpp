#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Select an addition : 1\n";
    cout << "Select an subtraction : 2\n";
    cout << "Select an multiplication : 3\n";
    cout << "Select an division : 4\n";
    cout << "Quit choice : 5\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    int a,b;
    switch (choice)
    {
        case 1:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter another number: ";
            cin >> b;
            cout << "the result: ";
            cout << a << " + "<< b <<" = "<< a+b;
            break;
        
        case 2:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter another number: ";
            cin >> b;
            cout << "the result: ";
            cout << a << " - "<< b <<" = "<< a-b;
                break;
        
        
        case 3:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter another number: ";
            cin >> b;
            cout << "the result: ";
            cout << a << " * "<< b <<" = "<< a*b;
            break;
        
        case 4:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter another number: ";
            cin >> b;
            cout << "the result: ";
            cout << a << " / "<< b <<" = "<< a/b;
            break;
        case 5:
            break;
        default:
            break;
    }
    return 0;
}