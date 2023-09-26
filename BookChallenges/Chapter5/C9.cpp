#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int totalFloors;
    cout << "Enter hotel's total floors: ";
    cin >> totalFloors;

    int numberOfRooms = 0;
    int roomOccupied = 0;

    for (int floor = 1; floor <= totalFloors; floor++) {
        int EmptyRoomPerFloor;
        int occupiedRoomPerFloor;

        cout << "Enter number of empty rooms in " 
             << floor << " is: ";
        cin >> EmptyRoomPerFloor;

        cout << "Enter number of rooms have occupied in " 
             << floor << " is: ";
        cin >> occupiedRoomPerFloor;

        numberOfRooms += EmptyRoomPerFloor;
        roomOccupied += occupiedRoomPerFloor;
    }
    int totalRooms = numberOfRooms + roomOccupied;
    double occupiedRoomRate = (static_cast<double>(roomOccupied) / static_cast<double>(numberOfRooms)) * 100.0;

    // Display result
    cout << "Total rooms in hotel: " << totalRooms << endl;
    cout << "Total rooms have occupied: " << roomOccupied << endl;
    cout << "Total empty rooms: " << numberOfRooms << endl;
    cout << "The percentage of rooms that are occupied: " 
         << fixed << setprecision(2) << occupiedRoomRate << "%" << endl;

    return 0;
}