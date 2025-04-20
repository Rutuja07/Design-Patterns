#pragma once
#include "decorator.hpp"
using namespace std;

class SourCream : public Decorator {
public:
    SourCream(Burrito* b);
    string addVeggies() override;
    string addCarbs() override;
    string addProtein() override;
    double getPrice() override;
};




