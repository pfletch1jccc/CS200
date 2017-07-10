#include <iostream>     // Input/output library
using namespace std;    // Standard C++ library namespace

int main()
{
	float ratio;
	float tspBakingSoda = 1;
	float tspBakingPowder = 0.5;
	float cupButter = 1;
	float cupWhiteSugar = 1.5;
	float egg = 1;

	// Program begins
	cout << "How many batches do you want to make: ";
	cin >> ratio;
	cout << (tspBakingSoda * ratio) << " tsp" << "\t" << "baking soda" << endl;
	cout << (tspBakingPowder * ratio) << " tsp" << "\t" << "baking powder" << endl;
	cout << (cupButter * ratio) << " tsp" << "\t" << "butter" << endl;
	cout << (cupWhiteSugar * ratio) << " tsp" << "\t" << "white sugar" << endl;
	cout << (egg * ratio) << " tsp" << "\t" << "egg" << endl;

	while (true);    // Program stops here
	return 0;
}