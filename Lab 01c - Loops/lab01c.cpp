#include <iostream>
using namespace std;

// Function 1
void F1_CountingUp()
{
	int counter = 0;
	cout << "F1_CountingUp" << endl;
	cout << "WHILE LOOP" << endl;
	while (counter < 10)
	{
		cout << counter << "\t";
		counter++;
	}

	cout << endl;

	cout << "FOR LOOP" << endl;
	for (int counter = 0; counter < 10; counter++)
	{
		cout << counter << "\t";
	}
}

// Function 2
void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;
	int counter = 1;
	cout << "WHILE LOOP" << endl;
	while (counter < 200)
	{
		cout << counter << "\t";
		counter *= 2;
	}

	cout << endl;

	cout << "FOR LOOP" << endl;
	for (int counter = 1; counter < 200; counter *= 2)
	{
		cout << counter << "\t";
	}

}

// Function 3
void F3_NumberGuesser()
{
	int secretNumber = 13;
	int playerGuess;

	cout << "F3_NumberGuesser" << endl;
	do
	{
		cout << "Enter a number: ";
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << "too low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "too high!" << endl;
		}

	} while (playerGuess != secretNumber);
	cout << "You win!" << endl;
}

// Function 4
void F4_InputValidator()
{
	int choice;
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5: ";
	cin >> choice;

	while (choice < 0 || choice > 5)
	{
		cout << "invalid entry. Try again" << endl;
		cout << "Please enter a number between 0 and 5: ";
		cin >> choice;
	}
	cout << "Thank you.";
}

// Function 5
void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
	float startingWage = 0;
	float percentRaisedPerYear = 0;
	float adjustedWage = 0;
	int yearsWorked = 0;

	cout << "Enter starting wage: ";
	cin >> startingWage;
	cout << "Enter percent of raise per year: ";
	cin >> percentRaisedPerYear;
	cout << "Enter number of years worked: ";
	cin >> yearsWorked;

	adjustedWage = startingWage;
	percentRaisedPerYear = percentRaisedPerYear / 100;
	for (int years = 1; years <= yearsWorked; years++)
	{
		adjustedWage = (adjustedWage * percentRaisedPerYear) + adjustedWage;
	}

	cout << "Your new wage is $" << adjustedWage;

}

// Function 6
void F6_Summation()
{
	cout << "F6_Summation" << endl;
	float sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum = sum + i;
	}
	cout << "Sum: " << sum;
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}