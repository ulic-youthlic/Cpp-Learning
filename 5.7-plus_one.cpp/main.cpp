// the increment operator

#include <iostream>

int main(void) {
  using namespace std;

  int a = 20;
  int b = 20;
  cout << "a   = " << a << ":   b = " << b << "\n";
  cout << "a++ = " << a++ << ": b++ = " << ++b << "\n";
  cout << "a   = " << a << ":   b = " << b << "\n";

  return 0;
}