#include "player.h"

Warrior::Warrior(int HP, int str, int special, int heal):Character(HP, str, special, heal){
	this->HP = HP;
	this->str = str;
	this->special = special;
	this->heal = heal;
}
Warrior::~Warrior(){}

int Warrior::attackSword() {
    int damage = rand()%str; //ada chance buat miss
    if (damage == 0){
        std::cout << "Attack missed" << std::endl;
    } else {
    std::cout << "You dealt " << damage << " damage " <<std::endl;
    }
    return damage;
}

int Warrior::specialWarrior(){
    int randomizer = rand()%12+1;
    int damage;
    if (randomizer == 7){
        damage = 999;
        std::cout << "Zantetsuken" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    else if (randomizer>=8 && randomizer <=11)
    {
        damage = 7 + rand()%getSpecial();
        std::cout << "Bladeblitz!" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    else
    {
        damage = 2 + rand()%getSpecial();
        std::cout << "Cross Slice!" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Warrior::healWarrior() { 
    int recover = 4 + rand()%heal;
    std::cout << "You gained " << recover << " HP" << std::endl;
    return recover;
}

int Warrior::warriorPhase(){
	int action = 0;
	std::cout << std::endl;
	Ulangi:
	std::cout << "Pick an action:" << std::endl;
	std::cout << "1.  Attack\t" << std::endl;
	std::cout << "2.  Special\t" << std::endl;
	std::cout << "3.  Heal\t" << std::endl;
	std::cout << "Input: ";
	std::cin >> action;
	std::cout << std::endl;
		switch(action){
			case 1:
				return attackSword();
			break;
			case 2:
			    return specialWarrior();
			break;
			case 3:
				return healWarrior();
			break;
			default:
			std::cout << "Invalid action, please select a valid action " << std::endl;
            goto Ulangi;
		}	
    action = 0;
}				

Mage::Mage(int HP, int str, int special, int heal):Character(HP, str, special, heal){
	this->HP = HP;
	this->str = str;
	this->special = special;
	this->heal = heal;
}
Mage::~Mage(){}

int Mage::attackRod() {
    int damage = rand()%str; //ada chance buat miss
    if (damage == 0){
        std::cout << "Attack missed" << std::endl;
    } else {
    std::cout << "You dealt " << damage << " damage " <<std::endl;
    }
    return damage;
}

int Mage::specialMage(){
    int randomizer = rand()%12+1;
    int damage;
    if (randomizer == 7){
        damage = 999;
        std::cout << "Ultima" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    else if (randomizer>=8 && randomizer <=11)
    {
        damage = 7 + rand()%getSpecial();
        std::cout << "Meteor!" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    else
    {
        damage = 2 + rand()%getSpecial();
        std::cout << "Aqua Breath!" << std::endl;
        std::cout << "You dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Mage::healMage() { 
    int recover = 4 + rand()%heal;
    std::cout << "You gained " << recover << " HP" << std::endl;
    return recover;
}

int Mage::magePhase(){
	int action = 0;
	std::cout << std::endl;
	Ulangi:
	std::cout << "Pick an action:" << std::endl;
	std::cout << "1.  Attack\t" << std::endl;
	std::cout << "2.  Special\t" << std::endl;
	std::cout << "3.  Heal\t" << std::endl;
	std::cout << "Input: ";
	std::cin >> action;
	std::cout << std::endl;
		switch(action){
			case 1:
				return attackRod();
			break;
			case 2:
			    return specialMage();
			break;
			case 3:
				return healMage();
			break;
			default:
			std::cout << "Invalid action, please select a valid action " << std::endl;
            goto Ulangi;
		}	
    action = 0;
}				