#include <iostream>
using namespace std;

int main()
{
	float a, b;
	float result = 0;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	cout << endl << "What kind of operation? ";
	cout << "(1) Add";
	cout << "(2) Subtract";
	cout << "(3) Multiply";
	cout << "(4) Divide" << endl;
	cout << "Choice: ";

	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		result = a + b;
		break;
	case 2:
		result = a - b;
		break;
	case 3:
		result = a * b;
		break;
	case 4:
		result = a / b;
		break;

	default:
		break;
	}

	cout << result;

	while (true);    // Program stops here
	return 0;
}