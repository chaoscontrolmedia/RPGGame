#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>



class Character{
    private:
        
    
        std::string name;
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



        void createCharacter2() {
            cout << "Name: ";
            getline(cin >> ws, name); // Read full line, including spaces

            cout << "Attack: ";
            string input;
            getline(cin, input);
            attack = stoi(input);

            cout << "Defense: ";
            getline(cin, input);
            defense = stoi(input);

            cout << "Health: ";
            getline(cin, input);
            health = stod(input);

            cout << "Heals: ";
            getline(cin, input);
            heals = stoi(input);
        }


        void displayData2(){
            cout <<"Name: " <<getName()
            << " | Health: " << getHealth()
            << " | Attack: " << getAttack()
            << " | Defense: " << getDefense()
            << " | Heals: " << getHeals();
        }


         void addToParty(const Character& individual_character){
            characters.push_back(individual_character);
         }





};