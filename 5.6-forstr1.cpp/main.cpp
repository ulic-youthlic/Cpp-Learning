// using for with a string

#include <iostream>
#include <string>

int main(void) {
  using namespace std;

  cout << "Enter a word: ";
  string word;
  cin >> word;

  // diplay letters in reverse order
  for (int i = word.size() - 1; i >= 0; i--) cout << word[i];
  cout << "\nBye.\n";

  return 0;
}