// arrayandloops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int _tmain(int argc, _TCHAR* argv[])
{
bool playerDead = false;
int playerHP = 100;
int combatRound = 0;

while (!playerDead)
{

	std::cout << "Combat Round" << combatRound << "\n";
	for (int i = 0; i < 10; i++)
	{
		int dam = std::rand() % 10;
		std::cout << "Player takes" << dam << "damage!" << std::endl;

		playerHP -= dam;
		std::cout << "Player has" << dam << "HP" << std::endl;
		if (playerHP <= 0)
		{
			playerDead = true;
			break;
		}
	}
	
	combatRound++;
	system("pause");
}
std::cout << "player is dead!!!";
return 0;
}









/*
int Var1 = 2;
int Var2 = 4;

int myArr[10];

int _tmain(int argc, _TCHAR* argv[])
{
	myArr[Var1] = 10;
	myArr[Var2 + 1] = 5;
	std::cout << myArr[Var1] << "" << myArr[Var2] << "" << myArr[Var2 + 1];
	
	system("pause");
	return 0;
}
*/
