#include <iostream>
using namespace std;

struct Point2D
{
	float x, y;
};

struct Player
{
	char name[8];
	int score;
	int health;
	int armour;
	int velocity;
	int postionX = 0;
	int postionY = 0;
	Point2D postion;

};


int main()
{
	//Point2D origin;
	//origin.x = 0;
	//origin.y = 0;
	
	//Point2D playerPostion = origin;

	Player playerList[2];
	//PLayer One
	playerList[0].name;
	cout << playerList[0].name << endl;
	playerList[0].health = 100;
	cout << playerList[0].health << endl;
	playerList[0].score = 100;
	cout << playerList[0].score << endl;
	playerList[0].velocity;
	playerList[0].postion;
	

	//Player Two
	
	playerList[1].name;
	cout << playerList[1].name << endl;
	playerList[1].health = 100;
	cout << playerList[1].health << endl;
	playerList[1].score = 100;
	cout << playerList[1].score << endl;
	playerList[1].velocity;
	playerList[1].postion;


	system("pause");
	return 0;
}