#include <iostream>
using namespace std;



struct Player
{
	char name[6];
	int health;
	int Sheild;

};

Player playerList[2];


int main()
{
	playerList[0].health = 100;
	playerList[1].health = 100;


	system("pause");
	return 0;
}