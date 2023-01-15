#include <iostream>

int main(void)
{
	std::cout << "Enter the world's population: ";
	long long int world;
	std::cin >> world;
	std::cout << "Enter the population of US: ";
	long long int US;
	std::cin >> US;
	const int percent = 100;
	std::cout << "The population of US is " << double(US) / double(world) * percent << "\% of the world population.\n";

	return 0;
}
