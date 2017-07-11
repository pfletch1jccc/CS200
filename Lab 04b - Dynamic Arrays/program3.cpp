#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace

int main()
{
	int index;
	char choice = 0;
	string ears[3] = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
	string heads[3] = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
	string bodies[3] = { "/(     )\\",  "\\(     )/",   "o(     )o" };
	string feet[3] = { "  d   b   ",  "  @   @ ",     "  () () " };

	string * ptrEars;
	string * ptrHead;
	string * ptrBody;
	string * ptrFeet;


	while (choice != 'n')
	{
		cout << "Enter ears (0 - 2: ";
		cin >> index;
		ptrEars = &ears[index];

		cout << "Enter head (0 - 2: ";
		cin >> index;
		ptrHead = &heads[index];

		cout << "Enter body (0 - 2: ";
		cin >> index;
		ptrBody = &bodies[index];

		cout << "Enter feet (0 - 2: ";
		cin >> index;
		ptrFeet = &feet[index];

		cout << endl << endl;
		cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;
		

		cout << endl << endl << "Again? (y/n): " << endl << endl;
		cin >> choice;

	}
	return 0;
}