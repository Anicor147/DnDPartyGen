#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Stats
{
	int _str, _dex, _con, _wis, _int, _cha;
	int _strMod, _dexMod,_wisMod,_intMod, _chaMod;

} ;
enum Race{elf,human,dwarf,tiefling,halfling,halforc};

class Ability 
{
	int _level;
	string _name, _description;
	
};

class Character
{
public:
	int _level;
	string _name;
	Race _myRace;
	

protected:
	int _healthPoint;
	Stats _charStats;
	
public:
	int calculatePB() {
		
		return 2 +((_level-1) / 4);
	}


	Character(Stats charStats, int lvl, string name, Race _charRace, int hp)
	{

	}
};


