#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	float battery;
	cout << "What is your current battery charge? ";
	cin >> battery;

	if (battery > 75)
	{
		cout << "[****]";
	}
	else if (battery > 50 && battery < 75)
	{
		cout << "[*** ]";
	}
	else if (battery > 25 && battery < 50)
	{
		cout << "[**  ]";
	}
	else
	{
		cout << "[*   ]";
	}


	while (true);    // Program stops here
	return 0;
}
