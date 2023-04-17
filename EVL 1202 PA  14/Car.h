#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string manufacturer, int yearBuilt, int numDoors);
    int getNumDoors();
    void setNumDoors(int numDoors);
    void displayInfo();
};

#endif
