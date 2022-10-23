#include <iostream>
#include "ParkedCar.h"
using namespace std;


ParkedCar::ParkedCar()
{
    make = "";
    model = "";
    color = "";
    licenseNumber = "";
    minutesParked = 0;
}


ParkedCar::ParkedCar(string mk, string mod, string col, string license, int mins)
{
    make = mk;
    model = mod;
    color = col;
    licenseNumber = license;
    minutesParked = mins;
}

ParkedCar::ParkedCar(const ParkedCar& car2)
{
    make = car2.make;
    model = car2.model;
    color = car2.color;
    licenseNumber = car2.licenseNumber;
    minutesParked = car2.minutesParked;
}


void ParkedCar::print()
{
    cout << "Car Information:\n";
    cout << "\tMake: " << make << endl;
    cout << "\tmodel: " << model << endl;
    cout << "\tColor: " << color << endl;
    cout << "\tLicense Number: " << licenseNumber << endl;
    cout << "\tMinutes Parked: " << minutesParked << endl;
}
