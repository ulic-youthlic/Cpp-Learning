#include <iostream>

double change(double);

int main(void)
{
	std::cout << "Enter the number of light years: ";
	double light_years;
	std::cin >> light_years;
	std::cout << light_years << " light years = " << change(light_years) << " astronomical units.\n";

	return 0;
}

double change(double light_years)
{
	return 63240 * light_years; 
}

