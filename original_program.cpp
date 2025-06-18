#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Character{
    protected:
        int HP;
        int str;
        int special;
        int heal;
    
    public:
        Character(int HP, int str, int special, int heal=0){
            this->HP = HP;
            this->str = str;
            this->special =  special;
            this->heal = heal;
        }

        void takeDamage(int damage){
			HP = HP - damage;
		}
		int getHP(){
			return HP;
		}
		int getStrength(){
			return str;
		}
		int getSpecial(){
			return special;
		}
		int getHeal(){
			return heal;
		}
        void showHP(){
            cout << "Your HP: " << HP << endl;
        }
        void showStat(){
            cout << "\nPlayer's stat: " << endl;
            cout << "HP\t\t: " << HP << endl;
            cout << "Strength\t: " << str << endl;
            cout << "Special \t: " << special << endl;
            cout << "Heal\t\t: " << heal << endl << endl;
        }
};

class Warrior : public Character{
	public:
		Warrior(int HP, int str, int special, int heal):Character(HP, str, special, heal){
			this->HP = HP;
			this->str = str;
			this->special = special;
			this->heal = heal;
		}

        int attackSword() {
            int damage = rand()%str; //ada chance buat miss
            if (damage == 0){
                cout << "Attack missed" << endl;
            } else {
            cout << "You dealt " << damage << " damage " <<endl;
            }
            return damage;
        }

        int specialWarrior(){
            int randomizer = rand()%12+1;
            int damage;
            if (randomizer == 7){
                damage = 999;
                cout << "Zantetsuken" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            else if (randomizer>=8 && randomizer <=11)
            {
                damage = 7 + rand()%getSpecial();
                cout << "Bladeblitz!" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            else
            {
                damage = 2 + rand()%getSpecial();
                cout << "Cross Slice!" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            return damage;
        }

        int healWarrior() { 
            int recover = 4 + rand()%heal;
            cout << "You gained " << recover << " HP" << endl;
            return recover;
        }

        int warriorPhase(){
			int action = 0;
			cout << endl;
			Ulangi:
			cout << "Pick an action:" << endl;
			cout << "1.  Attack\t" << endl;
			cout << "2.  Special\t" << endl;
			cout << "3.  Heal\t" << endl;
			cout << "Input: ";
			cin >> action;
			cout << endl;

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
					cout << "Invalid action, please select a valid action " << endl;
                    goto Ulangi;
				}	
            action = 0;
		}				
};

class Mage : public Character{
	public:
		Mage(int HP, int str, int special, int heal):Character(HP, str, special, heal){
			this->HP = HP;
			this->str = str;
			this->special = special;
			this->heal = heal;
		}

        int attackRod() {
            int damage = rand()%str; //ada chance buat miss
            if (damage == 0){
                cout << "Attack missed" << endl;
            } else {
            cout << "You dealt " << damage << " damage " <<endl;
            }
            return damage;
        }

        int specialMage(){
            int randomizer = rand()%12+1;
            int damage;
            if (randomizer == 7){
                damage = 999;
                cout << "Ultima" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            else if (randomizer>=8 && randomizer <=11)
            {
                damage = 7 + rand()%getSpecial();
                cout << "Meteor!" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            else
            {
                damage = 2 + rand()%getSpecial();
                cout << "Aqua Breath!" << endl;
                cout << "You dealt " << damage << " damage " << endl;
            }
            return damage;
        }

        int healMage() { 
            int recover = 4 + rand()%heal;
            cout << "You gained " << recover << " HP" << endl;
            return recover;
        }

        int magePhase(){
			int action = 0;
			cout << endl;
			Ulangi:
			cout << "Pick an action:" << endl;
			cout << "1.  Attack\t" << endl;
			cout << "2.  Special\t" << endl;
			cout << "3.  Heal\t" << endl;
			cout << "Input: ";
			cin >> action;
			cout << endl;

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
					cout << "Invalid action, please select a valid action " << endl;
                    goto Ulangi;
				}	
            action = 0;
		}				
};

class Goblin:public Character {
    public:
		Goblin(int HP, int str, int special):Character(HP, str, special){
			this->HP = HP;
			this->str = str;
			this->special = special;
		}

        int attackGoblin(){
            int damage = rand()%str; //ada chance buat miss
            if (damage == 0){
                cout << "Attack missed" << endl;
            } else {
                cout << "Goblin dealt " << damage << " damage " << endl;
            }
            return damage;
        }

        int specialGoblin(){
            int randomizer = rand()%100+1;
            int damage;
            if (randomizer == 78 || randomizer == 43){
                damage = 999;
                cout << "Troll attack!" << endl;
                cout << "Goblin dealt " << damage << " damage " << endl;
            }
            else if (randomizer>58 && randomizer<67)
            {
                damage = 10 + rand()%getSpecial();
                cout << "Goblin secret technique!" << endl;
                cout << "Goblin dealt " << damage << " damage " << endl;
            }
            else
            {
                damage = 2 + rand()%getSpecial();
                cout << "Rock slam!" << endl;
                cout << "Goblin dealt " << damage << " damage " << endl;
            }
            return damage;
        }


        int goblinPhase(){
			int action = 1 + (rand()%2);
				if (action == 1){
						return attackGoblin();
                }
				if (action == 2){
					    return specialGoblin();
                }
            return attackGoblin();
		}	
};

class Flan:public Character {
    public:
		Flan(int HP, int str, int special):Character(HP, str, special){
			this->HP = HP;
			this->str = str;
			this->special = special;
		}

        int attackFlan(){
            int damage = rand()%str; //ada chance buat miss
            if (damage == 0){
                cout << "Attack missed" << endl;
            } else {
                cout << "Goblin dealt " << damage << " damage " << endl;
            }
            return damage;
        }

        int specialFlan(){
            int randomizer = rand()%100+1;
            int damage;
            if (randomizer == 78 || randomizer == 43){
                damage = 999;
                cout << "SLAM!" << endl;
                cout << "Flan dealt " << damage << " damage " << endl;
            }
            else if (randomizer>58 && randomizer<67)
            {
                damage = 10 + rand()%getSpecial();
                cout << "Flan secret technique!" << endl;
                cout << "Flan dealt " << damage << " damage " << endl;
            }
            else
            {
                damage = 2 + rand()%getSpecial();
                cout << "Thunder strike!" << endl;
                cout << "Flan dealt " << damage << " damage " << endl;
            }
            return damage;
        }


        int flanPhase(){
			int action = 1 + (rand()%2);
				if (action == 1){
						return attackFlan();
                }
				if (action == 2){
					    return specialFlan();
                }
            return attackFlan();
		}	
};

void battleWarrior_Goblin(Warrior &player, Goblin &enemy){
    player.showStat();
    while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
        cout << "Player's turn" << endl;
        cout << "Your HP: " << player.getHP() << endl;
        enemy.takeDamage(player.warriorPhase());
        cout << "Enemy's HP: " << enemy.getHP() << endl;
        cout << endl;
        cin.get();
        cout << "Enemy turn" << endl;
        player.takeDamage(enemy.goblinPhase());
        cout << endl;
    }
    if (enemy.getHP() <= 0){
        cout << "You WIN!" << endl;
    } else {
        cout << "You LOSE!" << endl;
    }
}

void battleWarrior_Flan(Warrior &player, Flan &enemy){
    player.showStat();
    while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
        cout << "Player turn" << endl;
        cout << "Your HP: " << player.getHP() << endl;
        enemy.takeDamage(player.warriorPhase());
        cout << "Enemy's HP: " << enemy.getHP() << endl;
        cout << endl;
        cin.get();
        cout << "Enemy turn" << endl;
        player.takeDamage(enemy.flanPhase());
        cout << endl;
    }
    if (enemy.getHP() <= 0){
        cout << "You WIN!" << endl;
    } else {
        cout << "You LOSE!" << endl;
    }
}

void battleMage_Goblin(Mage &player, Goblin &enemy){
    player.showStat();
    while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
        cout << "Player turn" << endl;
        cout << "Your HP: " << player.getHP() << endl;
        enemy.takeDamage(player.magePhase());
        cout << "Enemy's HP: " << enemy.getHP() << endl;
        cout << endl;
        cin.get();
        cout << "Enemy turn" << endl;
        player.takeDamage(enemy.goblinPhase());
        cout << endl;
    }
    if (enemy.getHP() <= 0){
        cout << "You WIN!" << endl;
    } else {
        cout << "You LOSE!" << endl;
    }
}

void battleMage_Flan(Mage &player, Flan &enemy){
    player.showStat();
    while ((player.getHP() > 0)&& (enemy.getHP() > 0)) {
        cout << "Player turn" << endl;
        cout << "Your HP: " << player.getHP() << endl;
        enemy.takeDamage(player.magePhase());
        cout << "Enemy's HP: " << enemy.getHP() << endl;
        cout << endl;
        cin.get();
        cout << "Enemy turn" << endl;
        player.takeDamage(enemy.flanPhase());
        cout << endl;
    }
    if (enemy.getHP() <= 0){
        cout << "You WIN!" << endl;
    } else {
        cout << "You LOSE!" << endl;
    }
}

int main()
{
    string chooseJob;
    Warrior warrior(60,20,16,12);
    Mage mage(40,10,22,18);
    Goblin goblin(70,17,22);
    Flan flan(55,22,17);

    cout << "Hey! Welcome to RPG Beta-v0.1" << endl;
    reInput:
    cout << "Choose your job class(Warrior/Mage): ";
    cin >> chooseJob;
    cout << "Battle Begin!" << endl << endl;
    if (chooseJob == "Warrior" || chooseJob == "warrior")
    {
        int randomizer = rand()%2 + 1;
        if(randomizer == 1){
            cout << "You're fighting Goblin" << endl;
            battleWarrior_Goblin(warrior, goblin);
        } else {
            cout << "You're fighting Flan" << endl;
            battleWarrior_Flan(warrior, flan);
        }
    }
    else if (chooseJob == "Mage" || chooseJob == "mage")
    {
        int randomizer = rand()%2 + 1;
        if(randomizer == 1){
            cout << "You're fighting Goblin" << endl;
            battleMage_Goblin(mage, goblin);
        } else {
            cout << "You're fighting Flan" << endl;
            battleMage_Flan(mage, flan);
        }
    } else {
        cout << "INVALID INPUT!" << endl;
        cout << "Try to re-input your choice!" << endl;
        goto reInput;
    }
    cout << "Thank you for playing!" << endl;
    return 0;
}