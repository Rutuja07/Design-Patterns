#pragma once
#include "Food_item.hpp"
using namespace std;

class Veg : public Burrito {
public:
    string addVeggies() override;
    string addCarbs() override;
    string addProtein() override;
    double getPrice() override;
};
