// Enter your age, and show how many months

#include <iostream>

int main(void)
{
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	std::cout << "You have through " << (12 * age) << " months.\n";
}

