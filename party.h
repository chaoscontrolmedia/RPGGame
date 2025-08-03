

#ifndef PARTY_H
#define PARTY_H

#include "character.h"
#include <string>
#include <vector>




class Party{
    private:
        std::vector<Character> characters;

    public:
        void addCharacter(const Character& character);
        std::vector<std::string> getCharacterNames() const;





    // Get list of character names
   

    // Display all characters
    void displayParty() const;

    // (Optional) access character by index
    Character& getCharacterAt(int index);
    int getSize() const;





                 std::vector<std::string> displayChars(){
            std::vector<std::string> result;

            for(const auto& character : characters){

                // Return names as strings
                result.push_back(character.getName());
                
            }
            return result;
         }



};
#endif


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



