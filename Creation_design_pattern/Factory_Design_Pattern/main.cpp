#include <iostream>
#include "BuildVehicles.hpp"
using namespace std;

int main() {
    Vehicle* car = BuildVehicles::getVehicle("car");
    if (car) car->BuildVehicle();
    delete car;

    Vehicle* bus = BuildVehicles::getVehicle("Bus");
    if (bus) bus->BuildVehicle();
    delete bus;

    return 0;
}
