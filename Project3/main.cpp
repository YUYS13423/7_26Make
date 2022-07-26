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

	MyCharacters.push_back(new Player());
	MyCharacters.push_back(new Monster());


	bool bIsRunning = true;

	while (bIsRunning) 
	{
		int KeyCode = _getch();
		Gool gool;

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