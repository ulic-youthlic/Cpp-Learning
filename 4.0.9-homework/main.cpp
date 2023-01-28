#include <iostream>

struct CandyBar
{
    std::string Brand;
    double Weight;
    int Calorie;
};

int main(void)
{
    using namespace std;

    CandyBar * foo = new CandyBar [3];

    foo[0].Brand = "ab";
    foo[0].Weight = 1.2;
    foo[0].Calorie = 100;

    foo[1].Brand = "cd";
    foo[1].Weight = 2.4;
    foo[1].Calorie = 200;

    foo[2].Brand = "ef";
    foo[2].Weight = 3.6;
    foo[2].Calorie = 300;

    for (int i = 0; i < 3; i++)
    {
        cout << "No." << i + 1 << " Candy:\nBrand: "
             << foo[i].Brand << endl
             << "Weight: " << foo[i].Weight << endl
             << "Calorie: " << foo[i].Calorie << endl;
    }

    return 0;
}