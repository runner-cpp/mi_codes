#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    //Player stats
    int health = 100;
    int mana = 50;
    
    //Enemy stats
    int enemy_health = 80;
    int enemy_attack = 10;

    bool game_over = false;

    char decision;
    srand(time(0)); // Make enemy turn randomize everytime this is run

    int gold = 0;
    

    while (!game_over){
        cout << "Health: " << health << " | Mana: " << mana << "\nEnemy Health: " << enemy_health << endl;
        // Player Decisions
        cout << "A - Attack \nH - Heal \nS - Spell \nP - Potion" << endl;
        cin >> decision;

        if (decision == 'A'){
            int damage = 10;            
                                          
            if (rand() % 100 < 20 ){                
                damage *= 2;                        //Code 2 (compound)
                gold += 2;                          // Critical system Code 2 (compound)
                cout << "Critical Damage! Enemy take " << damage << " damage (+2 gold)\n";
            } else {
                cout << "Attacked. Enemy take 10 damage! (+1 gold)\n";
                gold += 1;                          //Code 2 (Compound)
            }
           
            enemy_health -= damage;                     //Damage

            if (enemy_health < 0){
                enemy_health = 0;
            }
            if (enemy_health == 0){
                cout << "You Win!!\n";
                game_over = true;
            }
        }
        else if (decision == 'H'){
            health += 15;
            cout << "Healed!\n";

            if (health > 100){
                health = 100;
            }
        }
        else if (decision == 'S'){
            
            if (mana >= 15){
                enemy_health -= 20; 
                mana -= 15; 
                cout << "You cast a spell! Enemy take 20 damage!\n";
            } else { 
                cout << "Insufficient Mana\n";
                }
        }
        else if (decision == 'P'){
            mana += 20;
            if (mana > 50){
                mana = 50;
            }
        }
        //Enemy attack after player decision
        if (enemy_health > 0){
            int choice = rand() %2; // randomize choices between 0 and 1
            if (choice == 0){
                health -= enemy_attack;
                cout << "Ouch. Enemy attacked. You take " << enemy_attack << " damage" << endl;
                if (health <= 0){
                    cout << "\nYou Lose" << endl;
                    game_over = true;
                }
            } else {
                enemy_health += 10;
                cout << "Enemy heals. Kill it Faster!\n";
                if (enemy_health > 80){
                    enemy_health = 80;
                }
            }
        }
        
        cout << "\nTotal Gold Gained: " << gold << endl;
        cout << "\n======================================\n\n";
    }
    

    return 0;

}