#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string;


enum CharacterType{

    GRUNT,
    KNIGHT,
    PLAYER,

    };

class Character{
    private:
        
    
        string name;
        double health;
        int attack;
        int defense;
        int heals;

        

        public:
        Character()= default;
        Character(
            string name, 
            double health, 
            int attack, 
            int defense, 
            int heals
        ):

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

        

       

        void displayStats() const;

        void performAttack(Character&attacker, Character&defender){
            defender.setHealth(defender.getHealth()-attacker.getAttack());
        }

        void attack(int& health, int damage){
            health -= damage;
        }

        void heal(int& health, int heal_amount){
            health += heal_amount;
        }

        void defend(int&health, int damage){
            health-=(damage*.5);
        }





};
#endif