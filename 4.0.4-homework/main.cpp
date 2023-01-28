#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    cout << "Enter your first name: ";
    string first_name;
    getline(cin, first_name);
    cout << "Enter your last name: ";
    string last_name;
    getline(cin, last_name);

    last_name += ", ";
    last_name += first_name;

    cout << "Here's the information in a single string: "
         << last_name << endl;

    return 0;
}