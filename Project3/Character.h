#pragma once
class Character
{
public:
	Character();
	virtual ~Character();
	int X;
	int Y;
	int HP;
	int Gold;
	virtual void Move(int way, Character* a);
	void Attack();

};
bool Predict(int FutureX, int FutureY);
