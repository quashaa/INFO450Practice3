#include <iostream>
using namespace std;

int main()
{
	int year;

	for (year = 1; year != 0;)
	{
		cout << "Please enter a 4 digit year below:" << endl;
		cin >> year;

		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
					cout << "This year is a leap year!" << endl;
				else
					cout << "This year is NOT a leap year!" << endl;
			}
			else
				cout << "This year is a leap year!" << endl;
		}
		else
			cout << "This year is NOT a leap year!" << endl;
	}
	return 0;
}