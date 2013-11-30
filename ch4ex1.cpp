#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (number < 10)
	{
		cout << "You entered a value less than 10." << std::endl;
	}
	else if (number == 10)
	{
		cout << "You entered 10!" << std::endl;
	}
	else
	{
		cout << "You entered a value greater than 10." << std::endl;
	}
}