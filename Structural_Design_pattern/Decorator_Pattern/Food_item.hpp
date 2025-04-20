#pragma once
#include <iostream>

using namespace std;

class Burrito {
   // { decorator } --> extra's --> type of rice , guacomole, sour cream, cost increase with this so have a base cost
   // essential : cost, veggies, carbs, protein 
public:
   double basePrice = 200.0;
   virtual string addVeggies() = 0;
   virtual string addCarbs() = 0;
   virtual string addProtein() = 0;
   virtual double getPrice() = 0;
   virtual ~Burrito() {}
};