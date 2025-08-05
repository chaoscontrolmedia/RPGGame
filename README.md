# RPGGame
a CLI-based RPG game.

//A basic game made in 2025, putting all of my skills to the test.







7/23/2025-Working on a battle system.
Implemented a attack array, and a modified attack array based on mp usage. 


using speed and accuracy to determint hit rate. Implement randomness.
use sequences to buff or negate damage from aattack arrays


Queue-Store MP used from attacks for special attack 



    // Character mario;

    //using the instsnce as a parameter

    // createCharacter(mario);
    // displayData(mario);

    // player.createCharacter2();
    // player.displayData2();



         /*
         ways to have the instances interact with each other
         
         1. Member Function 
         2. Non Member(Friend Func)
         3. Overloaded Operatr 
         4.Observer Pattern/Event 
         5. Strategy Pattern
         */

// class Character
// fonction of the instance vsinstance as a parameter vs 

//Inheritance vs composition



        //Non-Member Function 

        /* Pros:
Keeps logic separate from the class definition.

Useful if you want a neutral "battle manager" or system-style architecture (good for games).

 Cons:
Might need to make it a friend function to access private members, reducing encapsulation.

Less intuitive if scattered across files.
*/


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

