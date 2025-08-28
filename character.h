#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string; 
using std::cout;
using std::cin;

// enum class CharacterType{
//     GRUNT,
//     KNIGHT,
//     PLAYER,
//     CharTypeCount
// };


// CharacterType InputType(){
//     int choice;
//     int size = static_cast<int>(CharacterType::CharTypeCount);

//     cout << "Type: ";
//     while(choice < 0 || choice >=size){
//         cout << "Invalid";
//         cin >> choice;
//     }
//     return static_cast<CharacterType>(choice);
// }


//CharacterType 

class Character{
    private:
        //CharacterType type;
        string name;
        double health;
        int attack;
        int defense;
        int heals;

        

    public:
        Character() = default;
        Character(string name, double health, int attack, int defense, int heals):

       
        name(name), 
        health(health), 
        attack(attack), 
        defense(defense),
        heals(heals)
        {}

        void setName(const string& newName) {name = newName;
}
         
        void setHealth(double h) { health = h; }
        void setAttack(int a) { attack = a; }
        void setDefense(int d) { defense = d; }
        void setHeals(int h) { heals = h; }


        string getName() const {return name;}
        double getHealth() const {return health;}
        int getAttack() const {return attack;}
        int getDefense() const { return defense; }
        int getHeals() const { return heals; }


        void performAttack(Character&attacker, Character&defender){
            defender.setHealth(defender.getHealth()-attacker.getAttack());
        }
        void character_attack(int& health, int damage){
            health -= damage;
        }
        void character_heal(int& health, int heal_amount){
            health += heal_amount;
        }
        void character_defend(int&health, int damage){
            health-=(damage*.5);
        }
         void displayStats() const;

         friend std::ostream& operator<<(std::ostream& os, const Character& c);
         
};

Character createCharacter();
#endif