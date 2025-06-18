#pragma once

#include "character.h"
#include <cstdlib>

class Warrior : public Character{
	public:
		Warrior(int HP, int str, int special, int heal);
        ~Warrior();

        int attackSword();
        int specialWarrior();
        int healWarrior();
        int warriorPhase();				
};

class Mage : public Character{
	public:
		Mage(int HP, int str, int special, int heal);
        ~Mage();

        int attackRod();
        int specialMage();
        int healMage();
        int magePhase();				
};