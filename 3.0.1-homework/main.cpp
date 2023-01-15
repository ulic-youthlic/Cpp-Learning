// convert `inch` to `foot inch`

#include <iostream>

int input_height(void)
{
	using namespace std;

	cout << "Please enter your height with `inch`: ________\b\b\b\b\b\b\b\b";
	int height;
	cin >> height;
	
	return height;
}
int main(void)
{
	int inch_height = input_height();
	const int a_foot_in_inch = 12;
	int foot = inch_height / a_foot_in_inch;
	int inch = inch_height % a_foot_in_inch;

	std::cout << inch_height << " inches are " << foot << " foot " << inch << " inch(es).\n";
}
