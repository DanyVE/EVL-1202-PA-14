#include <iostream>
#include "Car.h"

Car::Car(string manufacturer, int yearBuilt, int numDoors)
    :Vehicle(manufacturer, yearBuilt) {
    this->numDoors = numDoors;
}

int Car::getNumDoors() {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() {
    Vehicle::displayInfo();
    cout << "Number of doors: " << numDoors << endl;
}
