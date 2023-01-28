#include <iostream>

int main(void) {
  using namespace std;

  cout << "Enter a latitude in degrees, minuts, and seconds:\n\
First, enter the degrees: ";
  int degrees;
  cin >> degrees;
  cout << "Next, enter the minuts of arc: ";
  int minuts;
  cin >> minuts;
  cout << "Finally, enter the seconds of arc: ";
  int seconds;
  cin >> seconds;

  const int degrees_to_minuts = 60;
  const int minuts_to_seconds = 60;
  double latitude =
      double(degrees) +
      ((double(seconds) / double(minuts_to_seconds)) + double(minuts)) /
          double(degrees_to_minuts);
  cout << degrees << " degrees, " << minuts << " minuts, " << seconds
       << " seconds = " << latitude << " degrees\n";
  return 0;
}
