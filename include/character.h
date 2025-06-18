#pragma once

#include <iostream>

class Character{
    protected:
        int HP;
        int str;
        int special;
        int heal;
    
    public:
        Character(int HP, int str, int special, int heal);
        ~Character();
        
        void takeDamage(int damage);
		int getHP();
		int getStrength();
		int getSpecial();
		int getHeal();
        void showHP();
        void showStat();
};
