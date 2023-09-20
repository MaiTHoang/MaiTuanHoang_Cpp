#include <iostream>
using namespace std;

int main() {
    // Constants for cookies per bag, servings per bag, and calories per serving
    const int COOKIES_PER_BAG = 30;
    const int SERVINGS_PER_BAG = 10;
    const int CALORIES_PER_SERVING = 300;

    // Declare variables to store the number of cookies eaten
    int cookiesEaten;

    // Ask the user to enter the number of cookies eaten
    cout << "Enter the number of cookies you actually ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    int totalCalories = (cookiesEaten * CALORIES_PER_SERVING) / COOKIES_PER_BAG * SERVINGS_PER_BAG;

    // Display the total calories consumed
    cout << "Total calories consumed: " << totalCalories << " calories" << endl;

    return 0;
}
