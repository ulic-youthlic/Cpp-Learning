// using pointers to strings

#include <cstring>
#include <iostream>

int main(void) {
  using namespace std;

  char animal[20] = "bear";
  const char *bird = "wren";
  char *ps;

  cout << animal << " and ";
  cout << bird << "\n";
  // cout << ps << "\n"; // may display garbage, may cause a crash

  cout << "Enter a kind of animal: ";
  cin >> animal;
  // cin >> ps; // Too horrible a blunder to try; ps doesn't
  //  point to allocated space

  ps = animal;
  cout << ps << "!\n";
  cout << "Before using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);
  cout << "After using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;
  delete[] ps;

  return 0;
}