#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace

int main()
{
	int* myInt = nullptr;
	string* myString = nullptr;
	float* myFloat = nullptr;

	int* myIntArr = nullptr;
	string* myStringArr = nullptr;
	float* myFloatArr = nullptr;

	int size = 0;


	myInt = new int;
	myString = new string;
	myFloat = new float;

	*myInt = 20;
	*myString = "Patrick Fletcher";
	*myFloat = 199.99;


	cout << *myInt << "\t" << *myString << "\t" << *myFloat << endl << endl;

	cout << "Enter array size: ";
	cin >> size;

	myIntArr = new int[size];
	myStringArr = new string[size];
	myFloatArr = new float[size];

	for (int i = 0; i < size; i++)
	{
		cout << "i = " << i << endl;
		cout << "\t" << "Enter int value:\t";
		cin >> myIntArr[i];

		cout << "\t" << "Enter string value:\t";
		cin >> myStringArr[i];

		cout << "\t" << "Enter float value:\t";
		cin >> myFloatArr[i];
	}

	cout << endl << endl;
	cout << "Here is your data:" << endl;

	for (int j = 0; j < size; j++)
	{
		cout << myIntArr[j] << "\t" << myStringArr[j] << "\t" << myFloatArr[j] << "\t" << endl;
	}

	delete myInt;
	delete myString;
	delete myFloat;

	delete[] myIntArr;
	delete[] myStringArr;
	delete[] myFloatArr;



	while (true);    // Program stops here
	return 0;
}