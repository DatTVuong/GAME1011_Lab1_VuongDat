#pragma once
#include <iostream>
using namespace std;
class Games
{
private:
	string Name;
	string GameD;
	string GameN;
	string GameP;

public:
	void Game(const string _name, const string _dev, const string _pro)
	{
		getName() = _name;
		getDev() = _dev;
		getPro() = _pro;
	}

	Games(string gameName, string dev, string pro)
	{
		GameN = gameName;
		GameD = dev;
		GameP = pro;
	}

	string getName()
	{
		return GameN;
	}

	string getDev()
	{
		return GameD;
	}

	string getPro()
	{
		return GameP;
	}
};