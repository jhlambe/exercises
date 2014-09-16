#include "AIE.h"
#include <iostream>

using namespace std;

int imageWidth = 64;
int imageHeight = 32;
int iScreenWidth = 800;
int iScreenHieght = 600;
char playerName [10];

struct Point2D
{
	float x, y;
};

struct Players
{
	const char* myCharArray;
	int score;
	int health;
	int armor;
	Point2D postion;
	Point2D velocity;

};

Players PLAYER[2];
 
//My Function
void main()
{
	//Initialise(800, 600, false, "Strusture");
	//SetBackgroundColour(SColour(0, 0, 0, 255));
	PLAYER[0].myCharArray = "LORD MAXX";
	cout << PLAYER[0].myCharArray << endl;
	PLAYER[0].health = 100;
	cout << "CURRENT HEALTH " << PLAYER[0].health << endl;
	PLAYER[0].armor = 20; 
	cout << "CURENT ARMOR " << PLAYER[0].armor << endl;
	PLAYER[0].postion.x = 100;
	PLAYER[0].postion.y = 100;

	system("pause");
 //   return 0;
}
