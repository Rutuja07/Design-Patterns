#pragma once
#include "decorator.hpp"

using namespace std;

class Guacomole : public Decorator {
public:
    Guacomole(Burrito* b);
    string addVeggies() override;
    string addCarbs() override;
    string addProtein() override;
    double getPrice() override;
};
