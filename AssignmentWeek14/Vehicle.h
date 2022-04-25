// Adam LaDue
// CIS 1202 501
// April 24, 2022



#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;
class Vehicle
{
private:
    string manufacturer;
    int yearBuilt;

public:
    //constructor
    Vehicle(string manufacturer, int yearBuilt);

    //getters and setters
    string getManufacturer();
    void setManufacturer(string manufacturer);

    int getYearBuilt();
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo();
};

#endif