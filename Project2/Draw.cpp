#include "Draw.h"
#include <string>
#include <stdlib.h>
#include "Player.h"
#include <iostream>
#include "Map.h"
#include "Monster.h"
#include "Gool.h"

using namespace std;


void Draw(Character* MyPlayer, Character* Monster)
{
	system("cls");

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (X == MyPlayer->X && Y == MyPlayer->Y)
			{
				cout << 'P';
			}
			else if (X == Monster->X && Y == Monster->Y)
			{
				cout << 'M';
			}
			
			else
			{
				cout << Map1[Y][X];
			}
			cout << ' ';
		}
		cout << endl;
	}

}

