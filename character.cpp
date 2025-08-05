#include <iostream>
#include "character.h"
using std::cout;
using std::endl;


void Character::displayStats() const {
    cout << "Name: " << name
         << " | Health: " << health
         << " | Attack: " << attack
         << " | Defense: " << defense
         << " | Heals: " << heals << endl;
}

        //          void displayData2(){
        //     cout <<"Name: " <<getName()
        //     << " | Health: " << getHealth()
        //     << " | Attack: " << getAttack()
        //     << " | Defense: " << getDefense()
        //     << " | Heals: " << getHeals();
        // }

        //         void displayData(Character& character){
//             cout <<"Name: " <<character.getName() 
//             << " | Health: " <<character.getHealth()
//             << " | Attack: " <<character.getAttack()
//             << " | Defense: " <<character.getDefense()
//             << " | Heals: " <<character.getHeals();
//         }






int main(){

    Character grunt("Grunt", 1000, 100,100, 3);
Character knight("Knight", 4000, 100,100, 3);
Character player("Player", 10000, 100,100, 3);
return 0;


}





//A general function to print out all the party members


//Load created characters
//Build/test loop
// int main() {
    
//     // Character player2;


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

//                     Character.displayChars();

                
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
