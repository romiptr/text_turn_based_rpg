#include <iostream>
#include <cstdlib>
#include <string>

#include "player.h"
#include "enemy.h"
#include "action.h"

int main()
{
    std::string chooseJob;
    Warrior warrior(60,20,16,12);
    Mage mage(40,10,22,18);
    Goblin goblin(70,17,22);
    Flan flan(55,22,17);

    std::cout << "Hey! Welcome to RPG Beta-v0.1" << std::endl;
    reInput:
    std::cout << "Choose your job class(Warrior/Mage): ";
    std::cin >> chooseJob;
    std::cout << "Battle Begin!" << std::endl << std::endl;
    if (chooseJob == "Warrior" || chooseJob == "warrior")
    {
        int randomizer = rand()%2 + 1;
        if(randomizer == 1){
            std::cout << "You're fighting Goblin" << std::endl;
            RPG::Action::battleWarrior_Goblin(warrior, goblin);
        } else {
            std::cout << "You're fighting Flan" << std::endl;
            RPG::Action::battleWarrior_Flan(warrior, flan);
        }
    }
    else if (chooseJob == "Mage" || chooseJob == "mage")
    {
        int randomizer = rand()%2 + 1;
        if(randomizer == 1){
            std::cout << "You're fighting Goblin" << std::endl;
            RPG::Action::battleMage_Goblin(mage, goblin);
        } else {
            std::cout << "You're fighting Flan" << std::endl;
            RPG::Action::battleMage_Flan(mage, flan);
        }
    } else {
        std::cout << "INVALID INPUT!" << std::endl;
        std::cout << "Try to re-input your choice!" << std::endl;
        goto reInput;
    }
    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}