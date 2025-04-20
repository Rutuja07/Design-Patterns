#include "add_guacomole.hpp"
using namespace std;

Guacomole::Guacomole(Burrito* b) : Decorator(b) {}

string Guacomole::addVeggies() { return burrito->addVeggies(); }
string Guacomole::addCarbs()   { return burrito->addCarbs(); }
string Guacomole::addProtein() { return burrito->addProtein(); }
double Guacomole::getPrice()   { return burrito->getPrice() + 40.0; }
