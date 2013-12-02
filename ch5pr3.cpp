#include <iostream>

using namespace std;

int main()
{
	int input=1;
	int sum=0;

	while (input)
	{
		cout << "Please input a number: ";
		cin >> input;

		sum += input;
		cout << "Current sum is: " << sum << '\n';
	}

	cout << "The final sum was: " << sum << '\n';
}