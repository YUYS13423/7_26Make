#include <iostream>
#include "Player.h"
#include "Monster.h"
#include <conio.h>
#include "Character.h"
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>


using namespace std;

int main()
{
	vector<Character*> MyCharacters;

	MyCharacters.push_back(new Player());
	MyCharacters.push_back(new Monster());


	bool bIsRunning = true;

	while (bIsRunning) // My engine
	{
		int KeyCode = _getch();
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			bIsRunning = false;
		}

		vector<Character*> MyCharacters;

		for (int i = 0; i < MyCharacters.size(); ++i)
		{
			MyCharacters[i]->Move();
		}

		delete MyCharacters[0];
	}
	




	return 0;
}