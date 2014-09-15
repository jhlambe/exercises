// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int myArray[SIZE_OF_ARRAY];
const int SIZE_OF_ARRAY = 10;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		myArray[i] = i; +1;
	}
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		cout << myArray[i] << endl;
	}
	return 0;
}

