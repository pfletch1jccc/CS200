#include <iostream>     // Input/output library
using namespace std;    // Standard C++ library namespace

int main()
{
	char choice;
	float priceHamburger = 7.50;
	float priceFries = 2.50;
	float priceSalad = 5.50;

	float* ptrPrice = nullptr;

	cout << "[h]amburger, [f]ries, or [s]alad? ";
	cin >> choice;
	if (choice == 'h')
	{
		ptrPrice = &priceHamburger;
		cout << "Original price: $" << *ptrPrice << endl;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << "With tax price: $" << taxAmt << endl;

	}
	else if (choice == 'f')
	{
		ptrPrice = &priceFries;
		cout << "Original price: $" << *ptrPrice << endl;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << "With tax price: $" << taxAmt << endl;
	}
	else if (choice == 's')
	{
		ptrPrice = &priceSalad;
		cout << "Original price: $" << *ptrPrice << endl;
		float taxAmt = (*ptrPrice * 0.065) + *ptrPrice;
		cout << "With tax price: $" << taxAmt << endl;

	}




	while (true);    // Program stops here
	return 0;
}