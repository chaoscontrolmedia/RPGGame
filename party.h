

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

        std::vector<std::string> displayChars();
        void addToParty(const Character&individual_character);
        void createCharacter2();


};

#endif





