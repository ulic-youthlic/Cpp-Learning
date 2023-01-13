// Translate F into C

#include <iostream>

double change_C_to_F(double);

int main(void)
{
	std::cout << "Please enter a Celsius value: ";
	double Celsius;
	std::cin >> Celsius;
	std::cout << Celsius << " degrees Celsius is " << change_C_to_F(Celsius) << " degrees Fahrenheit.\n";

	return 0;
}

double change_C_to_F(double Celsius)
{
	return 1.8 * Celsius + 32.0;
}
