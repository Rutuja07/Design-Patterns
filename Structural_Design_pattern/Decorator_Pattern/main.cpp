#include "Food_item.hpp"
#include "veg_burrito.hpp"
#include "non_veg_burrito.hpp"
#include "decorator.hpp"
#include "add_guacomole.hpp"
#include "add_sour_cream.hpp"
#include <string>
using namespace std;

int main () {
  Burrito* base = new Veg();
  Burrito* withSour = new SourCream(base);
  Burrito* withGuacomole = new Guacomole(withSour);
  cout << "Veggies: " << withGuacomole->addVeggies() << endl;
  cout << "Carbs: " << withGuacomole->addCarbs() << endl;
  cout << "Protein: " << withGuacomole->addProtein() << endl;
  cout << "Total Price: " << withGuacomole->getPrice() << endl;
  delete withGuacomole;
  return 0;
}
