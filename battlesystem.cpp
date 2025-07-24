
#include <iostream>
#include <vector>

using namespace std;

static long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

class BattleSystem{
    int HP = 100;
    int normal_attack = 10;
};


//If the user wants to use consecutive attacks
//Add MP cost to the attack array '
//use amplifier to 

void amplifier(double &attack, double scale_factor){
    attack += scale_factor;
}

//Separate concerns: Just have 1 array handle the output of the attacks
//Fukusū no kōgeki
vector<double> consecutive_attacks(int amount){
    vector<double> attacks(amount);
    
    for(int i = 1; i<=amount; ++i){
        attacks[i] = i;
        cout << attacks[i] << " ";
    }
    return attacks;
}

//Zōfuku sa reta fukusū no kōgeki
vector<double> amplified_consecutive_attacks(int amount, double scale_factor){
    vector<double> modified_attacks(amount);

    for(int i = 1; i<=amount; ++i){
        modified_attacks[i] = i;
        amplifier(modified_attacks[i], scale_factor);
        cout << modified_attacks[i] << " ";
    }
    return modified_attacks;
}





//use math for special attacks//Bonus for answering right



//scale_factor = 



int main(){
    int amount = 5;
    int mp = 100;
    int mp_cost = 100;
   

    //cout << "MP: " << mp;
    // cout << "Enter MP cost: ";
    // cin >> mp_cost;
    // mp-= mp_cost;


    //scale factor is 10% of the MP cost 
    double scale_factor = (mp_cost*.1);


    cout << "Attacks:\n";
    auto original = consecutive_attacks(amount);
    cout << "\n";
    cout << "Modified:\n";
    auto amplified = amplified_consecutive_attacks(amount, scale_factor);


    // cout <<"Remaining MP: " << mp;
    // cout << "\namplifier:" << amplifier;

}
