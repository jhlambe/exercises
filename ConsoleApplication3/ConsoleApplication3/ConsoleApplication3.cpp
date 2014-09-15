#include <iostream>

using namespace std;

const int SIZE_OF_ARRAY = 10;

int myArray[SIZE_OF_ARRAY];

int main()
{
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		myArray[i] = i; +1;
	}
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		cout << myArray[i] << endl;
	}
	system("pause");
	return 0;
}