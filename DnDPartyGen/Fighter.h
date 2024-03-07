#pragma once
#include "Character.h"
#include <vector> // Possibiliter de changement

class Fighter : public Character
{
public:
	Fighter(const Stats& charStats, int lvl, const string& name, Race _charRace, int hp,
		const vector<Ability>& list_of_ability_core)
		: Character(charStats, lvl, name, _charRace, hp),
		  listOfAbilityCore(list_of_ability_core)
	{
	}

	vector<Ability> listOfAbilityCore
		{
		Ability(1, "Archery"),
		Ability(1, "Defense"),
		Ability(1, "Dueling"),
		Ability(1, "Great Weapon Fighting"),
		Ability(1, "Protection"),
		Ability(1, "Two-Weapon Fighting"),
		Ability(1, "Second Wind"),
		Ability(1, "Action Surge")
		};
};

class BattleMaster : Fighter
{
public:
	BattleMaster(const Stats& charStats, int lvl, const string& name, Race _charRace, int hp,
		const vector<Ability>& list_of_ability_core, const vector<string>& maneuvers,
		const vector<Ability>& list_of_ability_bm)
		: Fighter(charStats, lvl, name, _charRace, hp, list_of_ability_core),
		  Maneuvers(maneuvers),
		  listOfAbilityBM(list_of_ability_bm)
	{
	}

	vector<string> Maneuvers
	{
	"Commander's Strike",
	"Disarming Attack",
	"Distracting Strike"
	};

	vector<Ability> listOfAbilityBM
	{
		Ability(3 , "Student Of War"),
		Ability(3, "Combat Superiority")
	};

};


class Champion : Fighter
{
public:
	Champion(const Stats& charStats, int lvl, const string& name, Race _charRace, int hp,
		const vector<Ability>& list_of_ability_core, const vector<Ability>& list_of_ability_champ)
		: Fighter(charStats, lvl, name, _charRace, hp, list_of_ability_core),
		  listOfAbilityChamp(list_of_ability_champ)
	{
	}

	vector<Ability> listOfAbilityChamp
	{
		Ability(3 , "Improved Critical"),
		Ability(7 , "Remarkable Athlete")
	};

};


class EldrichtKnight : Fighter
{
public:
	EldrichtKnight(const Stats& charStats, int lvl, const string& name, Race _charRace, int hp,
		const vector<Ability>& list_of_ability_core, const vector<Ability>& list_of_ability_ek)
		: Fighter(charStats, lvl, name, _charRace, hp, list_of_ability_core),
		  listOfAbilityEK(list_of_ability_ek)
	{
	}

	vector<Ability> listOfAbilityEK
	{
		Ability(3 , "Weapon Bond"),
		Ability(7 , "War Magic")
	};

	
};
