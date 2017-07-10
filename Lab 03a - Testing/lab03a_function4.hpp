#ifndef _function4
#define _function4

#include <string>
using namespace std;

int GetLength(string word)
{
	int length = 0;
	length = word.size();
	return length;
}

void Test_GetLength()
{
	cout << "************ Test_GetLength ************" << endl;

	string input;
	int expectedOutput;
	int actualOutput;

	/* TEST 1 ********************************************/
	input = "cat";
	expectedOutput = 3;

	actualOutput = GetLength(input);
	if (actualOutput == expectedOutput)
	{
		cout << "Test_GetLength: Test 1 passed!" << endl;
	}
	else
	{
		cout << "Test_GetLength: Test 1 FAILED!" << endl;
	}

	/* TEST 2 ********************************************/
	// CREATE YOUR OWN TEST
	input = "hot wheel";             // change me
	expectedOutput = 9;     // change me

	actualOutput = GetLength(input);
	if (actualOutput == expectedOutput)
	{
		cout << "Test_GetLength: Test 2 passed!" << endl;
	}
	else
	{
		cout << "Test_GetLength: Test 2 FAILED!" << endl;
	}

	/* TEST 3 ********************************************/
	// CREATE YOUR OWN TEST
	input = "This is test string";             // change me
	expectedOutput = 19;     // change me

	actualOutput = GetLength(input);
	if (actualOutput == expectedOutput)
	{
		cout << "Test_GetLength: Test 3 passed!" << endl;
	}
	else
	{
		cout << "Test_GetLength: Test 3 FAILED!" << endl;
	}

	/* Test 4 ********************************************/
	// CREATE YOUR OWN TEST
	input = "hello world";             // change me
	expectedOutput = 11;     // change me

	actualOutput = GetLength(input);
	if (actualOutput == expectedOutput)
	{
		cout << "Test_GetLength: Test 4 passed!" << endl;
	}
	else
	{
		cout << "Test_GetLength: Test 4 FAILED!" << endl;
	}


	/* TEST 5 ********************************************/
	// CREATE YOUR OWN TEST
	input = "";             // change me
	expectedOutput = 0;     // change me

	actualOutput = GetLength(input);
	if (actualOutput == expectedOutput)
	{
		cout << "Test_GetLength: Test 5 passed!" << endl;
	}
	else
	{
		cout << "Test_GetLength: Test 5 FAILED!" << endl;
	}

}

#endif



