#include "enemy.h"

Goblin::Goblin(int HP, int str, int special):Character(HP, str, special,/*No Heal*/ 0){
	this->HP = HP;
	this->str = str;
	this->special = special;
}

Goblin::~Goblin(){}

int Goblin::attackGoblin(){
    int damage = rand()%str; //ada chance buat miss
    if (damage == 0){
        std::cout << "Attack missed" << std::endl;
    } else {
        std::cout << "Goblin dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Goblin::specialGoblin(){
    int randomizer = rand()%100+1;
    int damage;
    if (randomizer == 78 || randomizer == 43){
        damage = 999;
        std::cout << "Troll attack!" << std::endl;
        std::cout << "Goblin dealt " << damage << " damage " << std::endl;
    }
    else if (randomizer>58 && randomizer<67)
    {
        damage = 10 + rand()%getSpecial();
        std::cout << "Goblin secret technique!" << std::endl;
        std::cout << "Goblin dealt " << damage << " damage " << std::endl;
    }
    else
    {
        damage = 2 + rand()%getSpecial();
        std::cout << "Rock slam!" << std::endl;
        std::cout << "Goblin dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Goblin::goblinPhase(){
	int action = 1 + (rand()%2);
		if (action == 1){
				return attackGoblin();
        }
		if (action == 2){
			    return specialGoblin();
        }
    return attackGoblin();
}	

Flan::Flan(int HP, int str, int special):Character(HP, str, special,/*No Heal*/ 0){
	this->HP = HP;
	this->str = str;
	this->special = special;
}

Flan::~Flan(){}

int Flan::attackFlan(){
    int damage = rand()%str; //ada chance buat miss
    if (damage == 0){
        std::cout << "Attack missed" << std::endl;
    } else {
        std::cout << "Goblin dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Flan::specialFlan(){
    int randomizer = rand()%100+1;
    int damage;
    if (randomizer == 78 || randomizer == 43){
        damage = 999;
        std::cout << "SLAM!" << std::endl;
        std::cout << "Flan dealt " << damage << " damage " << std::endl;
    }
    else if (randomizer>58 && randomizer<67)
    {
        damage = 10 + rand()%getSpecial();
        std::cout << "Flan secret technique!" << std::endl;
        std::cout << "Flan dealt " << damage << " damage " << std::endl;
    }
    else
    {
        damage = 2 + rand()%getSpecial();
        std::cout << "Thunder strike!" << std::endl;
        std::cout << "Flan dealt " << damage << " damage " << std::endl;
    }
    return damage;
}

int Flan::flanPhase(){
	int action = 1 + (rand()%2);
		if (action == 1){
				return attackFlan();
        }
		if (action == 2){
			    return specialFlan();
        }
    return attackFlan();
}	