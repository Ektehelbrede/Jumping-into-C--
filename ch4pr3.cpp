#include <iostream>

using namespace std;

int main()
{
	double first_number;
	double second_number;
	double result;
	char operation;

	cout << "Please input the operation you would like to use: " << std::endl;
	cin >> operation;

	cout << "Please input the first argument: " << std::endl;
	cin >> first_number;

	cout << "Please input the second argument: " << std::endl;
	cin >> second_number;

	if (operation == '*')
	{
		result = first_number * second_number;
	}
	else if (operation == '/')
	{
		result = first_number / second_number;
	}
	else if (operation == '+')
	{
		result = first_number + second_number;
	}
	else if (operation == '-')
	{
		result = first_number - second_number;
	}
	else
	{
		cout << "Please enter a valid operation, (+ - * /)." << std::endl;
		return 0;
	}

	cout << "The result is: " << result << std::endl;
}