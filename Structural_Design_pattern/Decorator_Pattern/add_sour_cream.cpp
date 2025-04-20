#include "add_sour_cream.hpp"
using namespace std;

SourCream::SourCream(Burrito* b) : Decorator(b) {}

string SourCream::addVeggies() { return burrito->addVeggies(); }
string SourCream::addCarbs()   { return burrito->addCarbs(); }
string SourCream::addProtein() { return burrito->addProtein(); }
double SourCream::getPrice()   { return burrito->getPrice() + 20.0; }
