#pragma once
#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

	int X;
	int Y;
protected://�������̽� �����, ��� ����
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

