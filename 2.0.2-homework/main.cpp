// Tanslate `long` into `yard`

#include <iostream>

int main(void)
{
	std::cout << "Please input distance in long: ";
	int distance;
	std::cin >> distance;
	std::cout << distance << " long is equal to " << (distance * 220) << " yard.\n";

	return 0;
}
