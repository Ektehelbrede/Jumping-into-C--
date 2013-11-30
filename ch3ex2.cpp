#include <iostream>

using namespace std;

int main()
{
	double first_argument;			// double allows for the division to complete 
	double second_argument;			// without truncating. (or is it truncation?)

	cout << "Enter first argument: ";
	cin >> first_argument;
	cout << "Enter second argument: ";
	cin >> second_argument;

	cout << first_argument << " * " << second_argument << " = " << 
		first_argument * second_argument << std::endl;
	cout << first_argument << " + " << second_argument << " = " << 
		first_argument + second_argument << std::endl;
	cout << first_argument << " / " << second_argument << " = " << 
		first_argument / second_argument << std::endl;
	cout << first_argument << " - " << second_argument << " = " << 
		first_argument - second_argument << std::endl;
}