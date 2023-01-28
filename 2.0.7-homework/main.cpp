#include <iostream>

void show_time(int, int);

int main(void) {
  using namespace std;

  cout << "Enter the number of hours: ";
  int hours;
  cin >> hours;
  cout << "Enter the number of minutes: ";
  int minutes;
  cin >> minutes;

  show_time(hours, minutes);
}

void show_time(int h, int min) {
  std::cout << "Time: " << h << ":" << min << "\n";
}
