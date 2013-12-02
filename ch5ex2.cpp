#include <iostream>

using namespace std;

int main()
{
	for (int i=0; i<10; i++)
	{
		/*
		The loop condition is checked before it loops again.
		i is updated before the condition is checked. [0,9]
		*/
		cout << i << " squared is " << i * i << '\n';
	}
}