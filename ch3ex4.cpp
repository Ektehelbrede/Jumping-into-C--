#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_name;

	cout << "Please enter your name: ";
	getline(cin, user_name, '\n');
	cout << "Hi " << user_name << "!\n";
}