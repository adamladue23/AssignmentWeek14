// Adam LaDue
// CIS 1202 501
// April 24, 2022


#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

//getters and setters
string Vehicle::getManufacturer()
{
    return manufacturer;
}
void Vehicle::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt()
{
    return yearBuilt;
}
void Vehicle::setYearBuilt(int yearBuilt)
{
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo()
{
    cout << "\nVehicle Information:\n";
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built:   " << yearBuilt << endl;
}

#endif