#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;

	cout << "Enter your password: " << std::endl;
	getline(cin, password, '\n');

	if (password == "xyzzy")
	{
		cout << "Access allowed." << std::endl;
	}
	else
	{
		cout << "Access denied." << std::endl;
		return 0;	// A return statement ends main.
	}
	// Other commands.
}