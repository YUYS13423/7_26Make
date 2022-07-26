#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

	int X;
	int Y;
protected://인터페이스 비공개, 상속 가능
	int HP;
	int Gold;
	
public:
	std::string name;
	virtual void Moveup();
	virtual void Movedown();
	virtual void Moveleft();
	virtual void Moveright();
	void Attack();
};

