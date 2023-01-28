#include <iostream>

int main(void) {
  using namespace std;

  cout << "Please enter your driving mileage(km): ";
  long long int mileage;
  cin >> mileage;
  cout << "Please enter your gasoline usage(L): ";
  long long int gasoline_usage;
  cin >> gasoline_usage;
  const int index = 100;
  cout << "The car run " << index << " km using "
       << double(gasoline_usage) / double(mileage) * double(index)
       << " L gasoline.\n";

  return 0;
}
