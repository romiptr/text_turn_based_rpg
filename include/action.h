#pragma once

#include "player.h"
#include "enemy.h"

namespace RPG
{
    class Action{
        public:
        Action();
        ~Action();

        static void battleWarrior_Goblin(Warrior &player, Goblin &enemy);
        static void battleWarrior_Flan(Warrior &player, Flan &enemy);
        static void battleMage_Goblin(Mage &player, Goblin &enemy);
        static void battleMage_Flan(Mage &player, Flan &enemy);
    };
} //namespace RPG