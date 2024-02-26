#pragma once
#include "Character.h"
#include <vector> // Possibiliter de changement

class Fighter : public Character
{

	public :
	
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

	vector<string> Maneuvers
	{
	"Commander's Strike",
	"Disarming Attack",
	"Distracting Strike"
	};

	vector<Ability> listOfAbilityBM
	{
		Ability(3 , "Student Of War"),
		Ability(3, "Combat Superiority"),
	};

};


class Champion : Fighter
{};


class EldrichtKnight : Fighter
{};
