#include <iostream>
#include "character.h"
#include "party.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;




//Overloaded op. Scalable, maintainable, and flexible.
ostream&operator<<  (ostream&os, const Character&character){
        cout <<"Name: " <<character.getName() 
        << " | Health: " <<character.getHealth()
        << " | Attack: " <<character.getAttack()
        << " | Defense: " <<character.getDefense()
        << " | Heals: " <<character.getHeals();
        return os;
}





//Creating a character. 
//The function doesn't need parameters because the character is created inside the function.

Character createCharacter(){
        string name;
        double health;
        int attack;
        int defense;
        int heals;

        
        cout << "Name:";
        cin >> name;
        cout << "Health:";
        cin >> health;
        cout << "Attack Power:";
        cin >> attack;
        cout << "Defense:";
        cin >> defense;
        cout << "Heals:";
        cin >> heals;

        Character newChar = Character(name, health, attack, defense, heals);
        //cout << "\nCharacter created:\n" << newChar << "\n";
        //newChar.displayStats();
        //displayData(newChar);

        return newChar;

}

//Display the party members
void Party::displayParty() const{
    if (characters.empty()){
        cout << "Empty";
    }
    cout << "Party: \n";
    for (const auto& c: characters){
        cout << "- " << c.getName();
    }
}



void Party::addToParty(const Character&individual_character){
    characters.push_back(individual_character);
}


void Party::addChar(){
    Character newCharacter = createCharacter();
    addToParty(newCharacter);
    cout << "Character added to party" << newCharacter;

    cout << "Party:";
    displayParty()
;}



//A general function to print out all the party members





int main(){
    cout << "Test";
    Party i;
    i.addChar();
    // Character n;
    // n.setName("jo");
    // cout << n.getName();

    //createCharacter();
    



    
    return 0;
    
    
}

    // Character a("orm", 100,20,10,3);
    // a.displayStats();
    // cout << "\n";
    // displayData(a);
    

// int main() {
    
//     Character grunt("Grunt", 1000, 100,100, 3);
//     Character knight("Knight", 4000, 100,100, 3);
//     Character player("Player", 10000, 100,100, 3);
//     Character player2;
//     int choice;


//     bool game_loop = true;

//     while (game_loop){
        
//         cout <<"Some game. \n1.Display Data";
//         cout << "\n2. Fight";
//         cout << "\n3. Exit";
//         cin >> choice;
//         return 0;

//         switch(choice){
//             case 1: 
//                 {
//                 cout << "Displaying Data:";
//                     displayData(grunt);
//                     cout << "\n";
//                     displayData(knight);
//                     cout << "\n";
//                     displayData(player);
//                 break;
//                 }

//             case 2:{
//                 cout << "Ok";
//                 break;
//                 }

//             case 3:{
//                 cout << "Ok, quitting.";
//                 game_loop = false;
//                 }
//             default:
//             cout << "Invalid";
//             break;
//         }
//     }
// }



        
//             switch(choice){
//                 case 1: 
//                 {
//                     cout << "Create";
//                     break;
//                 }
//                 break;



        
//                 case 2:{
                
//                     cout << "Ok";
//                     break;
//                 }
//                 case 3:
//                 {
//                 cout << "Ok, quitting.";
//                 game_loop = false;
//                 }
//             }
        


// //Member function. Good for small projects. con: class is dependent on io.
// void Character::displayStats() const {
//     cout << "Name: " << name
//          << " | Health: " << health
//          << " | Attack: " << attack
//          << " | Defense: " << defense
//          << " | Heals: " << heals << endl;
// }

// //Free function. Good for flexible outputs. 
// void displayData(Character& character){
//         cout <<"Name: " <<character.getName() 
//         << " | Health: " <<character.getHealth()
//         << " | Attack: " <<character.getAttack()
//         << " | Defense: " <<character.getDefense()
//         << " | Heals: " <<character.getHeals();
// }
