#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace

int main()
{
	string students[3] = { "John", "Allen", "Sue" };
	int choice;
	cout << "Enter 0, 1, or 2: ";
	cin >> choice;
	string *ptrStudent = &students[choice];
	cout << "New Name: ";
	cin >> *ptrStudent;
	cout << endl << endl;

	


	for (int i = 0; i < 3; i++)
	{
		cout << "Student " << i << " = " << students[i] << endl;
	}


	while (true);    // Program stops here
	return 0;
}