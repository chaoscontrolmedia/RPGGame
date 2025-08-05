#include "party.h"
#include <iostream>
using namespace std;

void Party::addCharacter(const Character& character) {
    characters.push_back(character);
}




std::vector<std::string> Party::getCharacterNames() const {
    std::vector<std::string> names;
    for (const auto& character : characters) {
        names.push_back(character.getName());
    }
    return names;
}




void Party::displayParty() const {
    for (const auto& character : characters) {
        character.displayStats(); // Assuming Character::displayStats exists
    }
}

Character& Party::getCharacterAt(int index) {
    return characters.at(index); // throws std::out_of_range if invalid index
}

int Party::getSize() const {
    return characters.size();
}

std::vector<std::string> Party::displayChars() {
    std::vector<std::string> result;
    for (const auto& character : characters) {
        result.push_back(character.getName());
    }
    return result;
}


void Party::addToParty(const Character& individual_character) {
    characters.push_back(individual_character);
}

void Party::createCharacter2() {
    string name;
    int attack, defense, heals;
    double health;

    cout << "Name: ";
    getline(cin >> ws, name); // read full line with spaces

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

    Character newChar(name, health, attack, defense, heals);
    characters.push_back(newChar); // Automatically adds it to party
}
