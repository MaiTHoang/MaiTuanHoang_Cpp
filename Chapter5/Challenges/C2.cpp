#include <iostream>
using namespace std;

int main() {
    // Loop through ASCII codes from 0 to 127
    for (int asciiCode = 0; asciiCode <= 127; asciiCode++) {
        // Display the character for the current ASCII code
        cout << static_cast<char>(asciiCode) << ' ';

        // Break line after every 16 characters
        if ((asciiCode + 1) % 16 == 0) {
            cout << '\n';
        }
    }

    return 0;
}
