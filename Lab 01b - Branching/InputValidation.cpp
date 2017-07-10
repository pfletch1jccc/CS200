#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	cout << "What is your favorite fruit? " << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry" << endl << endl;

	int choice;
	cin >> choice;

	cout << "Your selection: " << choice << endl;
	if (choice < 1 || choice > 4)
	{
		cout << "Invalid choice!";
	}
	else
	{
		cout << "Good choice!";
	}

	while (true);    // Program stops here
	return 0;
}
