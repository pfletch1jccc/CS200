#include <iostream>     // Input/output library
#include <string>
using namespace std;    // Standard C++ library namespace


int main()
{
	string classes[4];
	classes[0] = "CS200";
	classes[1] = "CS134";
	classes[2] = "CS156";
	classes[3] = "CS220";

	cout << "Array address: " << classes << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Item " << i << " address: " << &classes[i] << "\t value: " << classes[i] << endl;
	}




	while (true);    // Program stops here
}