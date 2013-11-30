#include <iostream>

using namespace std;

int main()
{
	cout << "This is a string.\t"  ".string a is This" << std::endl;
	cout << "That last string had a tab character.\n";
	cout << "And that one had a newline character. This block of text"
		" is very long and is on multiple lines. Does it work? Guess we" 
		" should try it." << std::endl;
	cout << "It worked as long as each line is a seperate string.\n";

	// In order to stop the executable from closing (when not run from
	// a terminal), add the following line to request an input.
	// cin.get(); 
}