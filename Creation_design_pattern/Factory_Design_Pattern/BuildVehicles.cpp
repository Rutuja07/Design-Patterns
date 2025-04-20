#include "BuildVehicles.hpp"

Vehicle* BuildVehicles::getVehicle(const std::string& type) {
    if (type == "car") {
        return new Car();
    } else if (type == "bus") {
        return new Bus();
    } else {
        return nullptr;
    }
}
