#include <iostream>
#include <string>

using namespace std;

int main()
{
	int answer=1;
	int answer_one=0;
	int answer_two=0;
	int answer_three=0;
	int largest;
	string question, first_answer, second_answer, third_answer;

	cout << "Please input the question:\n";
	getline(cin, question, '\n');

	cout << "Please input the first question:\n";
	getline(cin, first_answer, '\n');
	cout << "Please input the second question:\n";
	getline(cin, second_answer, '\n');
	cout << "Please input the third question:\n";
	getline(cin, third_answer, '\n');

	while (answer)
	{
		cout << "The question is: " << question << '\n';
		cout << "The possible answers are:\n" << "1. " << first_answer
			<< '\n' << "2. " << second_answer << '\n' << "3. "
			<< third_answer << '\n';

		cout << "Please indicate your answer: ";
		cin >> answer;

		if (answer == 1)
			answer_one++;
		else if (answer == 2)
			answer_two++;
		else if (answer == 3)
			answer_three++;
		else
		{
			cout << "Invalid answer. Please try again.\n";
			continue;
		}
	}

	cout << "The results of the question: " << question << '\n';
	cout << "1. " << first_answer << ": " << answer_one << '\n'
		<< "2. " << second_answer << ": " << answer_two << '\n'
		<< "3. " << third_answer << ": " << answer_three << '\n';

	// This last part will output a vertical bar graph.
	// It should display properly on any display as long as there
	// is room to fit 3 vertical columns of information.
	largest = answer_one;

	if (largest < answer_two)
		largest = answer_two;
	if (largest < answer_three)
		largest = answer_three;

	cout << '\n';

	while (largest)
	{
		if (largest <= answer_one)
			cout << "#";
		else 
			cout << " ";

		cout << " ";

		if (largest <= answer_two)
			cout << "#";
		else
			cout << " ";

		cout << " ";

		if (largest <= answer_three)
			cout << "#";
		else
			cout << " ";

		cout << '\n';
		largest--;
	}

	cout << "1 2 3\n";
}