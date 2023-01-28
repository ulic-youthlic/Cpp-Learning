#include <iostream>

int main(void) {
  using namespace std;

  cout << "Enter the number of seconds: ";
  long long int time;
  cin >> time;
  cout << time << " seconds = ";
  const int min_to_s = 60;
  int seconds = time % min_to_s;
  time = time / min_to_s;
  const int h_to_min = 60;
  int minuts = time % h_to_min;
  time = time / h_to_min;
  const int d_to_h = 24;
  int hours = time % d_to_h;
  int days = time / d_to_h;
  cout << days << " days, " << hours << " hours, " << minuts << " minuts, "
       << seconds << " seconds\n";

  return 0;
}
