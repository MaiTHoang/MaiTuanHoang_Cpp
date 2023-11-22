// This program demonstrates the prefix and postfix 
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
    int num = 4;    

    cout << num << endl;    // Display 4
    cout << num++ << endl;  // Display 4, then adds 1 to num
    cout << num << endl;    // Display 5
    cout << ++num << endl;  // Add 1 to num, then display 6
    cout << endl;           // Display the blank line

    cout << num << endl;    // Display 6
    cout << num-- << endl;  // Display 5, then subtracts 1 from num
    cout << num << endl;    // Display 5
    cout << --num << endl;  // Subtracts 1 from num, then display 4
    
    return 0; 
}