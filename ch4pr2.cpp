#include <iostream>

using namespace std;

int main()
{
	int password;

	cout << "Please enter your password: " << std::endl;
	cin >> password;

	if (password == 1234 || password == 4321)
	{
		cout << "Access allowed." << std::endl;
	}
	else
	{
		cout << "Access denied." << std::endl;
		return 0;
	}

	cout << "You got in! This place is full of amazing stuff!" << std::endl;
}