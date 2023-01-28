#include <iostream>
#include <array>

int main(void)
{
    using namespace std;

    cout << "Enter your 40 meters record three times:\n";

    array<double, 3> records;

    for (int i = 0; i < 3; ++i)
    {
        cout << i + 1 << ": ";
        cin >> records.at(i);
    }

    double average = (records.at(0) + records.at(1) + records.at(2)) / 3.0;
    cout << "Average :" << average << endl;

    return 0;
}