#include <iostream>     // Input/output library
#include <string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()

using namespace std;    // Standard C++ library namespace

int main()
{
	int size = 0;
	srand(time(NULL)); // (At the beginning of main())
	cout << "How many lotto balls will there be? " << endl;
	cin >> size;

	int* lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = rand() % 100;
		cout << lottoNumbers[i] << "\t";
	}

	delete [] lottoNumbers;


	while (true);    // Program stops here
	return 0;
}