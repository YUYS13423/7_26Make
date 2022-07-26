#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include "Gool.h"
#include "Map.h"
#include "Monster.h"
#include "Player.h"

using namespace std;

int main() 
{
	vector<Character*> MyCharacters;
	Gool gool;
	MyCharacters.push_back(new Player());
	MyCharacters.push_back(new Monster());

	int randmove;
	bool bIsRunning = true;

	while (bIsRunning) 
	{
		int KeyCode = _getch();
		if (KeyCode == 'p' || KeyCode == 'P')
		{
			bIsRunning = false;
		}

		MyCharacters[0]->Move(KeyCode,MyCharacters[0]);
		int Type = (rand() % 4);
			if (Type == 0)
			{
				randmove='w';
			}
			else if (Type == 1)
			{
				randmove = 'a';
			}
			else if (Type == 2)
			{
				randmove = 's';
			}
			else if (Type == 3)
			{
				randmove = 'd';
			}

			MyCharacters[1]->Move(randmove, MyCharacters[1]);




		system("cls");

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (X == MyCharacters[0]->X && Y == MyCharacters[0]->Y)
				{
					cout << 'P';
				}
				else if (X == MyCharacters[1]->X && Y == MyCharacters[1]->Y)
				{
					cout << 'M';
				}
				else if (X == gool.X && Y == gool.Y)
				{
					cout << 'G';
				}
				else
				{
					cout << Map[Y][X];
				}
				cout << ' ';
			}
			cout << endl;
		}




		

		
	}
	return 0;
}