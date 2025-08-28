#include "party.h"
#include "character.h"
#include <iostream>

using namespace std;




void Party::addToParty(const Character&individual_character){
    characters.push_back(individual_character);
}

void Party::addChar(){
    Character newCharacter = createCharacter();
    addToParty(newCharacter);
    cout << "Character added to party";
}

// Character&Party::getCharacterAt(int index) {
//     return characters.at(index); // throws std::out_of_range if invalid index
// }


// int Party::getSize() const{
//     return static_cast<int>(characters.size());
// }







// vector<string> Party::getCharacterNames() const {
//     vector<string> names;
//     for (const auto& character : characters) {
//         names.push_back(character.getName());
//     }
//     return names;
// }



// Get a character by index (modifiable)
// Character& Party::getCharacterAt(int index) {
//     if (index < 0 || index >= getSize()) {
//         throw out_of_range("Invalid character index");
//     }
//     return characters.at(index);
// }

// // Get a character by index (read-only)
// const Character& Party::getCharacterAt(int index) const {
//     if (index < 0 || index >= getSize()) {
//         throw out_of_range("Invalid character index");
//     }
//     return characters.at(index);
// }















// void Party::createCharacter2() {
//     string name;
//     int attack, defense, heals;
//     double health;

//     cout << "Name: ";
//     getline(cin >> ws, name); // read full line with spaces

//     cout << "Attack: ";
//     string input;
//     getline(cin, input);
//     attack = stoi(input);

//     cout << "Defense: ";
//     getline(cin, input);
//     defense = stoi(input);

//     cout << "Health: ";
//     getline(cin, input);
//     health = stod(input);

//     cout << "Heals: ";
//     getline(cin, input);
//     heals = stoi(input);

//     Character newChar(name, health, attack, defense, heals);
//     characters.push_back(newChar); // Automatically adds it to party
// }
