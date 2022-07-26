#include "Draw.h"
#include <string>
#include <stdlib.h>
#include "Player.h"
#include <iostream>
#include "Map.h"
#include "Monster.h"
#include "Gold.h"

void Draw()
{
	void Draw()
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
				else if (X == MyPlayer->X && Y == MyPlayer->Y)
				{
					cout << 'M';
				}
				else if (X == MyGold->X && Y == MyPlayer->Y)
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
}
