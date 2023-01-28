// Create three functions.

#include <iostream>

void firstFunc(void);
void secondFunc(void);

int main(void) {
  firstFunc();
  firstFunc();
  secondFunc();
  secondFunc();

  return 0;
}

void firstFunc(void) { std::cout << "Three blind mice\n"; }

void secondFunc(void) { std::cout << "See how they run\n"; }
