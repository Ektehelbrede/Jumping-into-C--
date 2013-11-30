#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_name;
	string last_name;

	cout << "Please enter your first name: ";
	cin >> first_name;	// Doesn't include anything after a space.
	cout << "Please enter your last name: ";
	cin >> last_name;
	cout << "Hi " << first_name + " " + last_name << "!\n";
	// Appending strings is done like this.
}