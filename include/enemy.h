#pragma once

#include "character.h"
#include <cstdlib>

class Goblin : public Character {
    public:
		Goblin(int HP, int str, int special);
        ~Goblin();

        int attackGoblin();
        int specialGoblin();
        int goblinPhase();
};

class Flan : public Character {
    public:
		Flan(int HP, int str, int special);
        ~Flan();

        int attackFlan();
        int specialFlan();
        int flanPhase();
};