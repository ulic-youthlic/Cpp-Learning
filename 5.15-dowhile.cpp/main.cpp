// exit-condition loop

#include <iostream>

int main(void) {
  using namespace std;
  int n;

  cout << "Enter numbers in range 1-10 to find ";
  cout << "my favorite number\n";
  do {
    cin >> n;
  } while (n != 7);
  cout << "Yes, 7 is my favorite.\n";

  return 0;
}