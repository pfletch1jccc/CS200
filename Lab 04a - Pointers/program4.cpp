#include <iostream>     // Input/output library
using namespace std;    // Standard C++ library namespace

int main()
{
	char choice;
	
	cout << "How many bytes is it? " << endl << endl;
	cout << "Choose one of the following data types: " << endl << endl;
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble?" << endl << endl;
	cin >> choice;
	cout << endl << endl;

	if (choice == 'i')
	{
		cout << "An integer size is: " << sizeof(int) << " bytes";
	}
	else if (choice == 'f')
	{
		cout << "A float size is: " << sizeof(float) << " bytes";
	}
	else if (choice == 'b')
	{
		cout << "A boolean size is: " << sizeof(bool) << " bytes";
	}
	else if (choice == 'd')
	{
		cout << "A double size is: " << sizeof(double) << " bytes";
	}



	while (true);    // Program stops here
	return 0;
}