#include <iostream>

int main(void) {
  using namespace std;

  cout << "Enter your car's fuel consumption(L/100km): ";
  double L_km;
  cin >> L_km;
  const double hundred_km_to_mile = 62.14;
  const double gallon_to_L = 3.785;
  cout << L_km << "L/100km is " << (hundred_km_to_mile * gallon_to_L) / L_km
       << "mpg\n";

  return 0;
}
