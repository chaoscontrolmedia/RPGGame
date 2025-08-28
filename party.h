#ifndef PARTY_H
#define PARTY_H

#include "character.h"
#include <string>
#include <vector>


using std::vector;



class Party{
    private:
        vector<Character> characters;

    public:
    void addToParty(const Character&individual_character);
    void addChar();
    void displayParty() const;
    vector<string> displayChars() const;
        
        
// Get list of character names
        
        // 
        // // Display all characters
        // int getSize() const;
        // void displayParty() const;

        // 
        // vector<string> getCharacterNames() const;


        // // (Optional) access character by index
        // Character& getCharacterAt(int index);
        // Character&Party::getCharacterAt(int index);
        // const Character& Party::getCharacterAtAlt(int index) const;

        
        // 


};

#endif





