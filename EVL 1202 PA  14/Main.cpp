//Leo Vazquez Estrada
//CIS 1202 101
//4/15/23

#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"
#include "PLLVE.h"

int main() {
    string manufacturer;
    int yearBuilt;
    cout << "Enter manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Info: " << endl;
    vehicle.displayInfo();

    int numDoors;
    cout << "\nEnter manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter number of doors: ";
    cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    cout << "\nCar Info: " << endl;
    car.displayInfo();

    int towingCapacity;
    cout << "\nEnter manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> yearBuilt;
    cout << "Enter towing capacity: ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nTruck Info: " << endl;
    truck.displayInfo();

    endprogram();
}