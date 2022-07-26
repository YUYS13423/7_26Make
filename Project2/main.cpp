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
#include "Input.h"
#include "Process.h"
#include "Draw.h"

using namespace std;

int main()
{
	vector<Character*> MyCharacters;

	MyCharacters.push_back(new Player());
	MyCharacters.push_back(new Monster());


	bool bIsRunning = true;

	while (bIsRunning) // My engine
	{
		int KeyCode = Input();

		Process(KeyCode,MyCharacters[0], MyCharacters[1]);
		Draw(MyCharacters[0], MyCharacters[1]);

	}

	vector<Character*> MyCharacters;
		delete MyCharacters[0];




	return 0;
}