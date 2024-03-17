#pragma once
#include "Character.h"
#include <vector>

class Rogue :
    public Character
{
public :
    vector<Ability> listOfAbilityCore
    {
        Ability(1 , "Acrobatics"),
        Ability(1 , "Athletics   "),
        Ability(1 , " Deception"),
        Ability(1 , "Insight"),
        Ability(1 , " Intimidation"),
        Ability(1 , " Perception"),
        Ability(1 , "Performance,"),
        Ability(1 , "Persuasion"),
        Ability(1 , "Sleight of Hand"),
        Ability(1 , "Stealth")
    };
};

class Thief : Rogue
{

    vector<Ability> listOfRogueAbility
    {
        Ability(1 , "Fast Hand"),
        Ability(1 , "Second Story Work"),
        Ability(1 , "Supreme Sneak"),
        Ability(1 , "Use Magic Device"),
        Ability(1 , "Thief's Reflexes")
    };
};

class Assasin: Rogue{

vector<Ability> listOfAssassinAbility
    {
        Ability(1 , "Assasinate"),
        Ability(1 , "Bonus Proficiencies"),
        Ability(1 , "Infiltration Expertise"),
        Ability(1 , "Impostor"),
        Ability(1 , "Death Strike")
    };
};

class AracaneTrickster : Rogue
{
    vector<Ability> listOfAracaneTAbility
    {
        Ability(1 , "SpellCasting"),
        Ability(1 , "Mage Hand Legerdemain"),
        Ability(1 , "Magical Ambush"),
        Ability(1 , "Versatile Trickster"),
        Ability(1 , "Spell Thief")
    };


};
