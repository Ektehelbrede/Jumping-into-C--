#include <iostream>

using namespace std;

int main()
{
	string username;
	string password;
	bool denied=0;
	int attempts=3;

	while (! denied && attempts > 0)
	{
		cout << "Enter your username: " << std::endl;
		getline(cin, username, '\n');

		cout << "Enter your password: " << std::endl;
		getline(cin, password, '\n');

		/*
		In order to add more passwords and users you would need to store 
		the passwords and usernames somewhere else. Manually adding and 
		recompiling each time is probably not the best solution.
		*/

		if (username == "root" && password == "xyzzy")
		{
			cout << "Access allowed." << std::endl;
			denied = 1;
		}
		else if (username == "guest" && password == "icanthurtthiscomputer")
		{
			cout << "Access allowed." << std::endl;
			denied = 1;
		}
		else 
		{
			cout << "Access denied. Please try again." << std::endl;
		}

		attempts--;
	}
}