#include <iostream>
#include <string>

struct CandyBar {
  std::string Brand;
  double Weight;
  int Calorie;
};

int main(void) {
  CandyBar snack = {"Mocha Munch", 2.3, 350};

  std::cout << "Info snack:\nBrand: " << snack.Brand << std::endl
            << "Weight: " << snack.Weight << std::endl
            << "Calorie: " << snack.Calorie << std::endl;

  return 0;
}