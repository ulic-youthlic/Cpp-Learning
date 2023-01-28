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
    Pizza * newPizza = new Pizza;

    cout << "Enter the information of this pizza:\n"
         << "Diameter: ";
    (cin >> newPizza->Diameter).get();
    cout << "Name: ";
    getline(cin, newPizza->Name);
    cout << "Weight: ";
    cin >> newPizza->Weight;

    cout << "All information about this pizza:\n"
         << "Name: " << newPizza->Name << endl
         << "Diameter: " << newPizza->Diameter << endl
         << "Weight: " << newPizza->Weight << endl;
    
    return 0;
}