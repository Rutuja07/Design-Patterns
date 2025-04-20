
#pragma once
#include "Food_item.hpp"
using namespace std;

class Decorator : public Burrito {
    protected:
       Burrito *burrito;
    public:
      Decorator(Burrito *item) : burrito(item) {}
      virtual ~Decorator() {
         delete burrito;
     }
};

   // { decorator } --> extra's -->  guacomole, sour cream, cost increase with this so have a base cost
