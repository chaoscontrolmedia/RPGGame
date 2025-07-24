#include <iostream>
#include <string>
#include <vector>
using namespace std;

//A basic game made in 2025, putting all of my skills to the test.

// class Character
// fonction of the instance vsinstance as a parameter vs 

//Inheritance vs composition

class Character{
    private:
        string name;
        double health;
       

        int attack;
        int defense;
        int heals;

        std::vector<Character> characters;

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

    //Member function

    /*
    Pros:
Easy to read and understand.

Keeps logic encapsulated in the class.

Cons:
All logic must live inside the attacking class.

Might break SRP (Single Responsibility Principle) if the function becomes complex.
    */
        // void attackTarget(Character&target) const{
        //     target.health-= this->attack;
        // }











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



         vector<string> displayChars(){
            vector<string> result;

            for(const auto& character : characters){

                // Return names as strings
                result.push_back(character.getName());
                
            }
            return result;
         }

         /*
         ways to have the instances interact with each other
         
         1. Member Function 
         2. Non Member(Friend Func)
         3. Overloaded Operatr 
         4.Observer Pattern/Event 
         5. Strategy Pattern
         */


         

};















void createCharacter(Character& character) {
    std::string input, tempName;

    cout << "Name: ";
    getline(std::cin >> std::ws, tempName);
    character.setName(tempName);

    cout << "Attack: ";
    getline(std::cin, input);
    character.setAttack(std::stoi(input));

    cout << "Defense: ";
    getline(cin, input);
    character.setDefense(std::stoi(input));

    cout << "Health: ";
    getline(cin, input);
    character.setHealth(stod(input));

    cout << "Heals: ";
    getline(cin, input);
    character.setHeals(stoi(input));
}


        void displayData(Character& character){
            cout <<"Name: " <<character.getName() 
            << " | Health: " <<character.getHealth()
            << " | Attack: " <<character.getAttack()
            << " | Defense: " <<character.getDefense()
            << " | Heals: " <<character.getHeals();
        }

        //Non-Member Function 

        /* Pros:
Keeps logic separate from the class definition.

Useful if you want a neutral "battle manager" or system-style architecture (good for games).

 Cons:
Might need to make it a friend function to access private members, reducing encapsulation.

Less intuitive if scattered across files.

*/
        void performAttack(Character&attacker, Character&defender){
            defender.setHealth(defender.getHealth()-attacker.getAttack());
        }
       

//A general function to print out all the party members


//Load created characters
//Build/test loop
int main() {
    bool game_loop = true;

    while (game_loop){
        int choice;
        cout <<"Some game. \n1.Create character";
        cout << "\n2. Fight";
        cout << "\n3. Exit";
        cin >> choice;
        return 0;

        switch(choice){
            case 1: 
                {
                cout << "Create";
                break;
                }

            case 2:{
                cout << "Ok";
                break;
                }

            case 3:{
                cout << "Ok, quitting.";
                game_loop = false;
                }
            default:
            cout << "Invalid";
            break;
        }
    }
}



        
        //     switch(choice){
        //         case 1: 
        //         {
        //             cout << "Create";
        //             break;
        //         }
        //         break;



        
        //         case 2:{
                
        //             cout << "Ok";
        //             break;
        //         }
        //         case 3:
        //         {
        //         cout << "Ok, quitting.";
        //         game_loop = false;
        //         }
        //     }
        
 





    // Character mario;

    //using the instsnce as a parameter

    // createCharacter(mario);
    // displayData(mario);

    // player.createCharacter2();
    // player.displayData2();











    // cout << player.getName();
    // cout << player.getHealth();
    // cout << player.getAttack();
    // cout << player.getDefense();
    // cout << player.getHeals();
    //Character warrior("Ed",100,100, 100,3);

    // int health = 100;
    // int enemy_attack = 30;
    // int heal_amt = 20;

    // defend(health, enemy_attack);
    // cout << health;


    // cout << health;
    // heal(health, heal_amt);
    // cout << "\n";
    // cout << health;

//     return 0;
// }

// void attack(int& health, int damage){
//     health -= damage;
// }

// void heal(int& health, int heal_amount){
//     health += heal_amount;
// }

// void defend(int&health, int damage){
//     health-=(damage*.5);
// }
