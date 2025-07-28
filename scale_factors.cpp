#include <iostream>
#include <vector>

using namespace std;

double customPow(double base, int exponent) {
    double result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

    static long long factorial(int n) {
        long long result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

void double_damage(double& hit) {
    hit *= 2;
}

void triple_damage(double& hit) {
    hit *= 3;
}

void squared_damage(double& hit) {
    hit = customPow(hit, 2);
}

void cubed_damage(double& hit) {
    hit = customPow(hit, 3);
}

vector<double> consecutive_attacks(int amount) {
    vector<double> attacks(amount);
    for (int i = 0; i < amount; ++i) {
        attacks[i] = i + 1;
        cout << attacks[i] << " ";
    }
    return attacks;
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

int main() {
    int amount = 5;
    cout << "Normal:   "; auto attacks = consecutive_attacks(amount); cout << "\n";
    cout << "Doubled:  "; auto doubled = consecutive_attacks_doubled(amount); cout << "\n";
    cout << "Tripled:  "; auto tripled = consecutive_attacks_tripled(amount); cout << "\n";
    cout << "Squared:  "; auto squared = consecutive_attacks_squared(amount); cout << "\n";
    cout << "Cubed:    "; auto cubed = consecutive_attacks_cubed(amount); cout << "\n";

    return 0;
}
