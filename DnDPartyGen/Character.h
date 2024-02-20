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


class Character
{
public:
	int level;
	string name;
	Race myRace;
	

protected:
	int healthPoint;
	Stats charStats;
	 
	//Class class;
public:
	int calculatePB() {
		
		return 2 +((level-1) / 4);
	}
	


};


