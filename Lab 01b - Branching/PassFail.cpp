#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	float studentPoints = 0;
	float totalPoints = 0;
	float percent = 0;

	cout << "What is your score? ";
	cin >> studentPoints;

	cout << "What was the total points? ";
	cin >> totalPoints;

	percent = (studentPoints / totalPoints) * 100;

	cout << "Score: " << percent << "%" << "\t";

	if (percent > 70)
	{
		cout << "Pass";
	}
	else
	{
		cout << "Fail";
	}

	while (true);    // Program stops here
	return 0;
}
