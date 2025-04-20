#pragma once
#include <iostream>

class Vehicle {
public:
    virtual void BuildVehicle() = 0;
    virtual ~Vehicle() {} // Virtual destructor
};
