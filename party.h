

#ifndef PARTY_H
#define PARTY_H

#include "character.h"
#include <string>
#include <vector>



#endif


// class Party{
//     private:
//         std::vector<Character> characters;

//     public:
//         void addCharacter(const Character& character);
//         std::vector<std::string> getCharacterNames() const;





//     // Get list of character names
   

//     // Display all characters
//     void displayParty() const;

//     // (Optional) access character by index
//     Character& getCharacterAt(int index);
//     int getSize() const;





//                  std::vector<std::string> displayChars(){
//             std::vector<std::string> result;

//             for(const auto& character : characters){

//                 // Return names as strings
//                 result.push_back(character.getName());
                
//             }
//             return result;
//          }





//          void addToParty(const Character& individual_character){
//             characters.push_back(individual_character);
//          }


         
//         void createCharacter2() {
//             cout << "Name: ";
//             getline(cin >> ws, name); // Read full line, including spaces

//             cout << "Attack: ";
//             string input;
//             getline(cin, input);
//             attack = stoi(input);

//             cout << "Defense: ";
//             getline(cin, input);
//             defense = stoi(input);

//             cout << "Health: ";
//             getline(cin, input);
//             health = stod(input);

//             cout << "Heals: ";
//             getline(cin, input);
//             heals = stoi(input);
//         }





// };
// #endif


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



