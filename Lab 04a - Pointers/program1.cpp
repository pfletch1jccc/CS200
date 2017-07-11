#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	int a = 5;
	float b = 10.5;
	string c = "Hello";

	cout << "Address: " << &a << " = " << a << endl;
	cout << "Address: " << &b << " = " << b << endl;
	cout << "Address: " << &c << " = " << c << endl;

	while (true);    // Program stops here

}