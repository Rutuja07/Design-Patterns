#pragma once
#include <string>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Bus.hpp"

class BuildVehicles {
public:
    static Vehicle* getVehicle(const std::string& type);
};
