#include <iostream>
#include <string>

struct student_info {
  std::string first_name, last_name;
  char deserve_grade;
  int age;
};

int main(void) {
  using namespace std;

  student_info a;
  cout << "What is your first name? ";
  getline(cin, a.first_name);
  cout << "What is your last name? ";
  getline(cin, a.last_name);
  cout << "What letter grade do you deserve? ";
  cin.get(a.deserve_grade);
  cout << "What is your age? ";
  cin >> a.age;
  cout << "Name: " << a.last_name << ", " << a.first_name << endl
       << "Grade: " << char(a.deserve_grade + 1) << endl
       << "Age: " << a.age << endl;

  return 0;
}