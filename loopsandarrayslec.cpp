#include <iostream>

using namespace std;

void OutputArray(int myArray2[], int sizeOfArray)

int main()
{
	const int SIZE_OF_ARRAY = 20;

	int myArray[SIZE_OF_ARRAY];

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		myArray[i] = i; +1;
	}
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		cout << myArray[i] << endl;
	}
	

	OutputArray(myArray, SIZE_OF_ARRAY);


	system("pause");
	return 0;
}

void OutputArray(int myArray2 [], int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)

	{
	
		cout << myArray2[i] << endl;
	}

}