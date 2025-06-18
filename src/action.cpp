#include "action.h"


namespace RPG{
    Action::Action(){}
    Action::~Action(){}

    void Action::battleWarrior_Goblin(Warrior &player, Goblin &enemy){
        player.showStat();
        while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
            std::cout << "Player's turn" << std::endl;
            std::cout << "Your HP: " << player.getHP() << std::endl;
            enemy.takeDamage(player.warriorPhase());
            std::cout << "Enemy's HP: " << enemy.getHP() << std::endl;
            std::cout << std::endl;
            std::cin.get();
            std::cout << "Enemy turn" << std::endl;
            player.takeDamage(enemy.goblinPhase());
            std::cout << std::endl;
        }
        if (enemy.getHP() <= 0){
            std::cout << "You WIN!" << std::endl;
        } else {
            std::cout << "You LOSE!" << std::endl;
        }
    }
    
    void Action::battleWarrior_Flan(Warrior &player, Flan &enemy){
        player.showStat();
        while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
            std::cout << "Player turn" << std::endl;
            std::cout << "Your HP: " << player.getHP() << std::endl;
            enemy.takeDamage(player.warriorPhase());
            std::cout << "Enemy's HP: " << enemy.getHP() << std::endl;
            std::cout << std::endl;
            std::cin.get();
            std::cout << "Enemy turn" << std::endl;
            player.takeDamage(enemy.flanPhase());
            std::cout << std::endl;
        }
        if (enemy.getHP() <= 0){
            std::cout << "You WIN!" << std::endl;
        } else {
            std::cout << "You LOSE!" << std::endl;
        }
    }
    
    void Action::battleMage_Goblin(Mage &player, Goblin &enemy){
        player.showStat();
        while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
            std::cout << "Player turn" << std::endl;
            std::cout << "Your HP: " << player.getHP() << std::endl;
            enemy.takeDamage(player.magePhase());
            std::cout << "Enemy's HP: " << enemy.getHP() << std::endl;
            std::cout << std::endl;
            std::cin.get();
            std::cout << "Enemy turn" << std::endl;
            player.takeDamage(enemy.goblinPhase());
            std::cout << std::endl;
        }
        if (enemy.getHP() <= 0){
            std::cout << "You WIN!" << std::endl;
        } else {
            std::cout << "You LOSE!" << std::endl;
        }
    }
    
    void Action::battleMage_Flan(Mage &player, Flan &enemy){
        player.showStat();
        while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
            std::cout << "Player turn" << std::endl;
            std::cout << "Your HP: " << player.getHP() << std::endl;
            enemy.takeDamage(player.magePhase());
            std::cout << "Enemy's HP: " << enemy.getHP() << std::endl;
            std::cout << std::endl;
            std::cin.get();
            std::cout << "Enemy turn" << std::endl;
            player.takeDamage(enemy.flanPhase());
            std::cout << std::endl;
        }
        if (enemy.getHP() <= 0){
            std::cout << "You WIN!" << std::endl;
        } else {
            std::cout << "You LOSE!" << std::endl;
        }
    }
} //namespace RPG
