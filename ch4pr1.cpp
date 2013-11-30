#include <iostream>

using namespace std;

int main()
{
	int first_age;
	int second_age;

	cout << "Please enter the first age: " << std::endl;
	cin >> first_age;

	cout <<"Please enter the second age: " << std::endl;
	cin >> second_age;

	if (first_age > 100 && second_age > 100)
	{
		cout << "Wow! You are both really old!" << std::endl;

		if (first_age > second_age)
		{
			cout << "But the first person is older!" << std::endl;
		}
		else if (first_age == second_age)
		{
			cout << "Are you the same person?!" << std::endl;
		}
		else
		{
			cout << "But the second person is older!" << std::endl;
		}
	}
	else
	{
		if (first_age > second_age)
		{
			cout << "The first person is older!" << std::endl;
		}
		else if (first_age == second_age)
		{
			cout << "Are you the same person?!" << std::endl;
		}
		else
		{
			cout << "The second person is older!" << std::endl;
		}
	}
}