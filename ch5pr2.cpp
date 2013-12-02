#include <iostream>

using namespace std;

int main()
{
	int choice;

	do
	{
		cout << "Please choose your favourite author from the following list:" << '\n';
		cout << "1. Scott Lynch" << '\n' << "2. George R. R. Martin" << '\n' <<
			"3. Patrick Rothfuss" << '\n' << "4. Brandon Sanderson" << '\n' <<
			"5. Robert Jordan" << '\n' << "6. Other" << '\n';
		cin >> choice;
	} while (choice < 1 || choice > 6);
}