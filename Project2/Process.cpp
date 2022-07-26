#include "Process.h"
#include "Player.h"
#include "Map.h"
#include "Character.h"

void Process(int KeyCode, Character* MyPlayer, Character* Monster)
{
	if (KeyCode == 'w' || KeyCode == 'W')
	{
		if (Predict(MyPlayer->X, MyPlayer->Y - 1))
		{
			MyPlayer->Y--;
		}
	}
	else if (KeyCode == 'a' || KeyCode == 'A')
	{
		if (Predict(MyPlayer->X - 1, MyPlayer->Y))
		{
			MyPlayer->X--;
		}
	}
	else if (KeyCode == 's' || KeyCode == 'S')
	{
		if (Predict(MyPlayer->X, MyPlayer->Y + 1))
		{
			MyPlayer->Y++;
		}
	}
	else if (KeyCode == 'd' || KeyCode == 'D')
	{
		if (Predict(MyPlayer->X + 1, MyPlayer->Y))
		{
			MyPlayer->X++;
		}
	}





	int Type = (rand() % 4) ;
	if (Type == 0)
	{
		if (Predict(MyPlayer->X, MyPlayer->Y - 1))
		{
			MyPlayer->Y--;
		}
	}
	else if (Type == 1)
	{
		if (Predict(MyPlayer->X - 1, MyPlayer->Y))
		{
			MyPlayer->X--;
		}
	}
	else if (Type == 2)
	{
		if (Predict(MyPlayer->X, MyPlayer->Y + 1))
		{
			MyPlayer->Y++;
		}
	}
	else if (Type == 3)
	{
		if (Predict(MyPlayer->X + 1, MyPlayer->Y))
		{
			MyPlayer->X++;
		}
	}

}

bool Predict(int FutureX, int FutureY)
{
	return (Map1[FutureX][FutureY] != '*');
}
