#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	int a = 5;
	int* ptrA = &a;
	float b = 10.5;
	float* ptrB = &b;
	string c = "Hello";
	string* ptrC = &c;

	cout << "Pointer: " << ptrA << " = " << a << endl;
	cout << "Pointer: " << ptrB << " = " << b << endl;
	cout << "Pointer: " << ptrC << " = " << c << endl;

	while (true);    // Program stops here

}