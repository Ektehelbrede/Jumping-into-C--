#include <iostream>

using namespace std;

int main()
{
	for (int i=99; i>0; i--)
	{
		if (i != 1)
			cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << '\n';
		else
			cout << i << " bottle of beer on the wall, " << i << " bottle of beer." << '\n';

		if (i != 2)
			cout << "Take one down, pass it around, " << i-1 << " bottles of beer on the wall." << '\n';
		else
			cout << "Take one down, pass it around, " << i-1 << " bottle of beer on the wall." << '\n';
	}
}