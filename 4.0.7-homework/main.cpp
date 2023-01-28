#include <iostream>
#include <string>

struct Pizza
{
    std::string Name;
    double Diameter;
    double Weight;
};

int main(void)
{
    using namespace std;
    Pizza newPizza;

    cout << "Enter the information of this pizza:\n"
         << "Name: ";
    getline(cin, newPizza.Name);
    cout << "Diameter: ";
    cin >> newPizza.Diameter;
    cout << "Weight: ";
    cin >> newPizza.Weight;

    cout << "All information about this pizza:\n"
         << "Name: " << newPizza.Name << endl
         << "Diameter: " << newPizza.Diameter << endl
         << "Weight: " << newPizza.Weight << endl;
    
    return 0;
}