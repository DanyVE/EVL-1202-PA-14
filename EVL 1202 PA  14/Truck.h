#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(string manufacturer, int yearBuilt, int towingCapacity);
    int getTowingCapacity();
    void setTowingCapacity(int towingCapacity);
    void displayInfo();
};

#endif
