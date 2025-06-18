#include "character.h"

Character::Character(int HP, int str, int special, int heal){
    this->HP = HP;
    this->str = str;
    this->special =  special;
    this->heal = heal;
    }

Character::~Character(){}

void Character::takeDamage(int damage){
	HP = HP - damage;
}
int Character::getHP(){
	return HP;
}
int Character::getStrength(){
	return str;
}
int Character::getSpecial(){
	return special;
}
int Character::getHeal(){
	return heal;
}
void Character::showHP(){
    std::cout << "Your HP: " << HP << std::endl;
}
void Character::showStat(){
    std::cout << "\nPlayer's stat: " << std::endl;
    std::cout << "HP\t\t: " << HP << std::endl;
    std::cout << "Strength\t: " << str << std::endl;
    std::cout << "Special \t: " << special << std::endl;
    std::cout << "Heal\t\t: " << heal << std::endl << std::endl;
}
