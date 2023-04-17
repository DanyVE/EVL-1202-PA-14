#include <iostream>
#include "Truck.h"

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt) {
    this->towingCapacity = towingCapacity;
}

int Truck::getTowingCapacity() {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << endl;
}
