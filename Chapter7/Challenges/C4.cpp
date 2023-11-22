#include <iostream>
using namespace std;

// Prototype fuctions
void NumberGreaterThanEnterNumber(const int SIZE,int arr[], int n);

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    int n;
    cout << "Enter the integer number: ";
    cin >> n;

    for(int index = 0; index < SIZE; index++)
    {
        cout << "Enter number: ";
        cin >> arr[index];
    }

    cout << "the numbers that greater than n: ";
    NumberGreaterThanEnterNumber(SIZE, arr, n);
    return 0;
}

// The fuction display the numbers greater than n
void NumberGreaterThanEnterNumber(const int SIZE, int arr[], int n)
{
    for (int index = 0; index < SIZE; index++)
    {
        if (arr[index] > n)
        {
            cout << arr[index] << " " << endl;
        }
    }
}