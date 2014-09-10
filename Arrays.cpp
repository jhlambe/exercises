// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"



void SinglePlayer();

void PartyCombat();

void MultiPartyCombat();

{
	int _tmain(int argc, _TCHAR* argv[])
		SinglePlayer();
	sytem("pause");
	return 0;

}

		PartyCombat();
		sytem("pause");
		return 0;
}

void MultiArray()
{
	int multi[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			multi[i][j] = num;
				num++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << 
	}
	{

	}



void PartyCombat()
{
	int party[5] = { 100, 100, 100, 100, 100 };
	bool partyDead = false;
	int target = 0;


	while (!partyDead)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Pick a Player 0 - 4" << std::endl;
			std::cin >> target;
			while (party[target] <= 0)
			{
				int newtar;
				std::cout << "pick a differant player 0 - 4" << std::endl;
				std::cin >> newtar;
				target = newtar;
			}

			party[target] -= std::rand()%40;
		}
	

	for (int i = 0; i < 4; i++)

	{
		std::cout << "Player" << i << "has" << party[i] << "hp" << std::endl;

	}
	if  (party[0]) <= 0 &&)
		(party[1]) <= 0 && )
		(party[2]) <= 0 && )
		(party[3]) <= 0 && )
	{
		partyDead = true;
	}