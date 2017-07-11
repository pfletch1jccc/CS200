#include "pa_virtual_pet.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string petName;
	int hungerPercent;
	int happinessPercent;
	int healthPercent;

	// 1. Initialize hungerPercent to 0, happinessPercent to 100,
	// and healthPercent to 100.
	hungerPercent = 0;
	happinessPercent = 100;
	healthPercent = 100;


	// 2. Get the user's input and store it in petName.
	cout << "What is your pets name? ";
	cin >> petName;


	bool quit = false;
	while (!quit) // game loop
	{
		cout << endl << endl;
		cout << "---------------------------" << endl;

		UpdatePet(hungerPercent, happinessPercent, healthPercent);
		DrawPet(healthPercent);
		DisplayPetStats(petName, hungerPercent, happinessPercent, healthPercent);

		// 3. Check if pet's health is less than or equal to 0.
		// if so, break out of the while loop.
		if (healthPercent == 0)
		{
			cout << "Sorry, " << petName << " has died!";
			break;
		}

		DisplayMainMenu();
		int choice = GetChoice(1, 4);

		// 4. Choose which function to call based on the user's choice
		if (choice == 1)
		{
			Feed(hungerPercent);
		}
		else if (choice == 2)
		{
			Play(happinessPercent);
		}
		else if (choice == 3)
		{
			Heal(healthPercent);
		}
		else if (choice == 4)
		{
			quit = true;
		}
	}

	return 0;
}
