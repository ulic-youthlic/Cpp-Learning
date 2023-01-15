#include <iostream>

int main(void)
{
	using namespace std;

	cout << "Please enter your heigh with foot and inches(eg. 20 20): _____\b\b\b\b\b";
	int foot, inches;
	cin >> foot >> inches;
	cout << "Please enter your weight with pound: ___\b\b\b";
	int pound;
	cin >> pound;

	const int foot_to_inches = 12;
	cout << "Your height is " << foot_to_inches * foot + inches << " inches.\n";
	const double inches_to_m = 0.0254;
	double height = double (foot_to_inches * foot + inches) * inches_to_m;
	const double kg_to_pound = 2.2;
	double weight = double (pound) / kg_to_pound;

	double BMI = weight / (height * height);
	cout << "Your BMI is " << BMI << endl;
}
