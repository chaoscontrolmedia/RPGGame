#include <iostream>
#include <vector>

using namespace std;

//Need to add fractional exponents

double customPow(double base, int exponent) {
    //case: Exponent is 0
    if (exponent == 0) return 1;
    bool isNegative = exponent < 0;

    if(isNegative){
        exponent = -exponent;
    }

    double result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    //negative exponents are fractional e.g. 4^-1 = 1/4
    if (isNegative)
    {
        return 1/result;
    }
    else {
        return result;
    }
}



    static long long factorial(int n) {
        long long result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }







struct ScaleFactors{
    int amount = 5;

    void quartered_damage(double& hit){hit *= 0.25;}
    void halved_damage(double& hit){hit *= 0.5;}
    void double_damage(double& hit) {hit *= 2;}
    void triple_damage(double& hit) {hit *= 3;}
    void squared_damage(double& hit) {hit = customPow(hit, 2);}
    void cubed_damage(double& hit) {hit = customPow(hit, 3);}
    //Harmonic series
    void fractional_decay_damage(double&hit) {hit = customPow(hit, -1);}
    void quadratic_decay_damage(double&hit) {hit = customPow(hit, -2);}
    void cubic_decay_damage(double&hit) {hit = customPow(hit, -3);}

    //Separate concerns: Just have 1 array handle the output of the attacks
    //Fukusū no kōgeki
    vector<double> consecutive_attacks(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        cout << attacks[i] << " ";
    }
    return attacks;
}

void amplifier(double &attack, double scale_factor){
    attack += scale_factor;
}
vector<double> consecutive_attacks_doubled(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        double_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_tripled(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        triple_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_squared(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        squared_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_cubed(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        cubed_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_halved(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        halved_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}


vector<double> consecutive_attacks_quartered(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        quartered_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_fractional_decay(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        fractional_decay_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_quadratic_decay(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        quadratic_decay_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}

vector<double> consecutive_attacks_cubic_decay(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        cubic_decay_damage(attacks[i]);
        cout << attacks[i] << " ";
    }
    return attacks;
}













//      auto quartered = consecutive_attacks_quartered(amount); cout << "\n";
//    auto halved = consecutive_attacks_halved(amount); cout << "\n";
//     auto fractional_decay = consecutive_attacks_fractional_decay(amount); cout << "\n";
//     auto quadratic_decay = consecutive_attacks_quadratic_decay(amount); cout << "\n";
//    auto cubic_decay = consecutive_attacks_cubic_decay(amount); cout << "\n";
//     cout << "\nlinear\n";
//     auto attacks = consecutive_attacks(amount); cout << "\n";
//     auto doubled = consecutive_attacks_doubled(amount); cout << "\n";
//      auto tripled = consecutive_attacks_tripled(amount); cout << "\n";
//     auto squared = consecutive_attacks_squared(amount); cout << "\n";
//      auto cubed = consecutive_attacks_cubed(amount); cout << "\n";


};





// int main() {

//         ScaleFactors scale;
//     int amount = 5;

//     cout << "Sublinear\n";
//     cout << "Quartered(n/4):              "; scale.consecutive_attacks_quartered(amount); cout << "\n";
//     cout << "Halved(n/2):                 "; scale.consecutive_attacks_halved(amount); cout << "\n";
//     cout << "Fractional Decay (1/n):      "; scale.consecutive_attacks_fractional_decay(amount); cout << "\n";
//     cout << "Quadratic Decay (1/n^2):     "; scale.consecutive_attacks_quadratic_decay(amount); cout << "\n";
//     cout << "Cubic Decay (1/n^3):         "; scale.consecutive_attacks_cubic_decay(amount); cout << "\n\n";

//     cout << "Linear\n";
//     cout << "Normal(n):                   "; scale.consecutive_attacks(amount); cout << "\n";
//     cout << "Doubled(2n):                 "; scale.consecutive_attacks_doubled(amount); cout << "\n";
//     cout << "Tripled(3n):                 "; scale.consecutive_attacks_tripled(amount); cout << "\n\n";

//     cout << "Exponential\n";
//     cout << "Squared(i^2):                "; scale.consecutive_attacks_squared(amount); cout << "\n";
//     cout << "Cubed(i^3):                  "; scale.consecutive_attacks_cubed(amount); cout << "\n";

    
//     // int amount = 5;
//     // cout << "Sublinear\n";
//     // cout << "Quartered(n/4):    "; auto quartered = consecutive_attacks_quartered(amount); cout << "\n";
//     // cout << "Halved(n/2):       "; auto halved = consecutive_attacks_halved(amount); cout << "\n";
//     // cout << "Fractional Decay 1/n:";auto fractional_decay = consecutive_attacks_fractional_decay(amount); cout << "\n";
//     // cout << "Quadratic Decay 1/n^2:    "; auto quadratic_decay = consecutive_attacks_quadratic_decay(amount); cout << "\n";
//     // cout << "Cubic Decay 1/n^3:    "; auto cubic_decay = consecutive_attacks_cubic_decay(amount); cout << "\n";
//     // cout << "\nlinear\n";
//     // cout << "Normal(n):         "; auto attacks = consecutive_attacks(amount); cout << "\n";
//     // cout << "Doubled(2n):       "; auto doubled = consecutive_attacks_doubled(amount); cout << "\n";
//     // cout << "Tripled:(3n)       "; auto tripled = consecutive_attacks_tripled(amount); cout << "\n";
//     // cout << "\nExponential\n";
//     // cout << "Squared(i^2):           "; auto squared = consecutive_attacks_squared(amount); cout << "\n";
//     // cout << "Cubed:(i^3)           "; auto cubed = consecutive_attacks_cubed(amount); cout << "\n";
    

//     return 0;
// }
