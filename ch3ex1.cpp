#include <iostream>

using namespace std;

int main()
{
	int thisisanumber;

	cout << "Please enter a number: ";
	cin >> thisisanumber;
	cout << "You entered: " << thisisanumber << "\n";

	cout << "Please enter a number: ";
	cin >> thisisanumber;
	cout << "You entered: " << thisisanumber << std::endl;

	// What is the difference between a newline \n and std::endl?
	// I assume I can loop this in some way...
}