#include <cstring>
#include <iostream>

int main(void)
{
    using namespace std;
    const int MAX = 100;
    
    cout << "Enter your first name: ";
    char first_name[MAX];
    cin.getline(first_name, MAX);
    cout << "Enter your last name: ";
    char last_name[MAX];
    cin.getline(last_name, MAX);
    char name[MAX * 2 + 1];
    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);
    cout << "Here's the information in a single string: "
         << name << endl;

    return 0;
}
