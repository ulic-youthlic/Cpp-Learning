#include <iostream>

struct CandyBar {
  std::string Brand;
  double Weight;
  int Colorie;
};

int main(void) {
  using namespace std;

  CandyBar bar[3] = {{"ab", 2.4, 10}, {"cd", 3.6, 20}, {"ef", 4.8, 30}};

  for (int i = 0; i < 3; ++i) {
    cout << "Info bar[" << i + 1 << "]:\n"
         << "Brand: " << bar[i].Brand << endl
         << "Weight: " << bar[i].Weight << endl
         << "Colorie: " << bar[i].Colorie << endl;
  }

  return 0;
}