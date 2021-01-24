#pragma once
#include <iostream>
using namespace std;

class Platform
{
private:
	string pname;
	string manufacturer;

public:
	void Game(const string _name, const string _manufacturer)
	{
		pname = _name;
		manufacturer = _manufacturer;
	}
	string getPName();
	string getManufacturer();
};