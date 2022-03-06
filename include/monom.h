#ifndef MP2_LAB4_POLINOMS_MONOM_H
#define MP2_LAB4_POLINOMS_MONOM_H
using namespace std;
struct Monom {
    int coefficient;
    int powers;
    Monom *next_monom;
    Monom *previous_monom;

    Monom(int coefficient, int powers) {
        if (powers > 999 || powers < 0) {
            throw runtime_error("Cannot create monom: power out of range");
        } else {
            this->coefficient = coefficient;
            this->powers = powers;
            this->next_monom = nullptr;
            this->previous_monom = nullptr;
        }
    }

    int x_power() { return this->powers / 100; }
    int y_power() { return this->powers / 10 % 10; }
    int z_power() { return this->powers % 10; }


};

#endif //MP2_LAB4_POLINOMS_MONOM_H
