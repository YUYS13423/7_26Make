#include "Character.h"
#include "Map.h"


Character::Character()
{
	X = 0;
	Y = 0;
	HP = 100;
	Gold = 0;
}

Character::~Character()
{
}

void Character::Move(int way, Character* a)
{
	if (way == 'w' || way == 'W')
	{
		if (Predict(a->X, a->Y - 1))
		{
			a->Y--;
		}
	}
	else if (way == 'a' || way == 'A')
	{
		if (Predict(a->X - 1, a->Y))
		{
			a->X--;
		}
	}
	else if (way == 's' || way == 'S')
	{
		if (Predict(a->X, a->Y + 1))
		{
			a->Y++;
		}
	}
	else if (way == 'd' || way == 'D')
	{
		if (Predict(a->X + 1, a->Y))
		{
			a->X++;
		}
	}
}

bool Predict(int FutureX, int FutureY)
{
	return (Map[FutureX][FutureY] != '*');
}

void Character::Attack()
{
}
