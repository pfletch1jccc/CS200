#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	string hometown;
	string name;

	cout << "What is your home town? ";
	cin >> hometown;
	cout << hometown;
	cout << endl << endl;

	if (hometown.size() > 6)
	{
		cout << "That's a long name!";
		cout << endl << endl;
	}

	cout << endl;
	cout << "What is your name? ";
	cin >> name;
	cout << name;
	cout << endl << endl;

	cout << "Hello, " << name << " from " << hometown << "!";



	while (true);    // Program stops here
	return 0;
}

