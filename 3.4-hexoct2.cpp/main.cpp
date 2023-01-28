// display values in hex and octal

#include <iostream>

using namespace std;

int main(void) {
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!" << endl;
  cout << "chest = " << chest << " (decimal for 42)" << endl;
  cout << hex;  // munipulator for chenging number base
  cout << "waist = " << waist << " (hexademical for 42)" << endl;
  cout << oct;
  cout << "inseam = " << inseam << " (octal for 42)" << endl;

  return 0;
}
