#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(string manufacturer, int yearBuilt);
    string getManufacturer();
    void setManufacturer(string manufacturer);
    int getYearBuilt();
    void setYearBuilt(int yearBuilt);
    void displayInfo();
};

#endif
