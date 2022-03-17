#include <iostream>
using namespace std;
int main()
{
	//delcare variable
	int inputted_number = 0;

	//asking question 
	cout << "Input a number from 1-12 ";
	cin >> inputted_number;

	//giving answers
	if (inputted_number == 1)
		cout << "Jan has 31 days!";
	else if (inputted_number == 2)
		cout << "Feb has 28";
	else if (inputted_number == 3)
		cout << "Mar has 31";
	else if (inputted_number == 4)
		cout << "Apr has 30";
	else if (inputted_number == 5)
		cout << "May has 30";
	else if (inputted_number == 6)
		cout << "Jun has 30";
	else if (inputted_number == 7)
		cout << "Jul has 31";
	else if (inputted_number == 8)
		cout << "Aug has 31";
	else if (inputted_number == 9)
		cout << "Sep has 30";
	else if (inputted_number == 10)
		cout << "Oct has 31";
	else if (inputted_number == 11)
		cout << "Nov has 30";
	else if (inputted_number == 12)
		cout << "Dec has 31";
}