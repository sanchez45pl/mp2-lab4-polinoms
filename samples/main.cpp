#include <iostream>
#include <vector>
#include "polinom.h"

using namespace std;

int main() {
    int main_menu_command = true;
    vector<Polinom> created_polinoms;

    cout << "Polinom CLI\n" << endl;
    while (main_menu_command) {
        cout << "Choose command:" << endl;
        cout << "\t" << "1 - create polinom" << endl;
        cout << "\t" << "2 - show created polinoms" << endl;
        cout << "\t" << "3 - operate with created polinoms" << endl;
        cout << "\t" << "0 - exit" << endl;
        cin >> main_menu_command;
        if (main_menu_command == 1) {
            Polinom new_polinom;
            float coefficient;
            int powers;
            int should_continue = true;
            while (should_continue) {
                cout << "Creating polinom" << endl;
                cout << "\t" << "Adding monom:" << endl;
                cout << "\t " << "Enter coefficient of monom: ";
                cin >> coefficient;
                cout << "\t " << "Enter xyz - powers of monom: ";
                cin >> powers;
                new_polinom.add_monom(coefficient, powers);
                cout << "Add another one?" << endl;
                cout << "\t " << "1 - Yes" << endl;
                cout << "\t " << "0 - No" << endl;
                cin >> should_continue;
            }
            created_polinoms.push_back(new_polinom);
        } else if (main_menu_command == 2) {
            for (int i = 0; i < created_polinoms.size(); i++) {
                cout << i + 1 << ") ";
                created_polinoms[i].print();
            }
        } else if (main_menu_command == 3) {
            int operation_menu_command = true;
            while (operation_menu_command) {
                cout << "Select operation:" << endl;
                cout << "\t" << "1 - addition" << endl;
                cout << "\t" << "2 - subtraction" << endl;
                cout << "\t" << "3 - multiplication by constant" << endl;
                cout << "\t" << "4 - multiplication by polinom" << endl;
                cout << "\t" << "0 - back" << endl;
                cin >> operation_menu_command;
                if (operation_menu_command == 1) {
                    int first_polinom, second_polinom;
                    Polinom new_polinom;
                    cout << "Select two polinoms:" << endl;
                    cout << "First: ";
                    cin >> first_polinom;
                    cout << "Second: ";
                    cin >> second_polinom;
                    new_polinom = created_polinoms[first_polinom - 1] + created_polinoms[second_polinom - 1];
                    new_polinom.print();
                } else if (operation_menu_command == 2) {
                    int first_polinom, second_polinom;
                    Polinom new_polinom;
                    cout << "Select two polinoms:" << endl;
                    cout << "First: ";
                    cin >> first_polinom;
                    cout << "Second: ";
                    cin >> second_polinom;
                    new_polinom = created_polinoms[first_polinom - 1] - created_polinoms[second_polinom - 1];
                    new_polinom.print();
                } else if (operation_menu_command == 3) {
                    int polinom, constant;
                    Polinom new_polinom;
                    cout << "Select polinom: ";
                    cin >> polinom;
                    cout << "Enter constant: ";
                    cin >> constant;
                    new_polinom = constant * created_polinoms[polinom - 1];
                    new_polinom.print();
                } else if (operation_menu_command == 4) {
                    int first_polinom, second_polinom;
                    Polinom new_polinom;
                    cout << "Select two polinoms:" << endl;
                    cout << "First: ";
                    cin >> first_polinom;
                    cout << "Second: ";
                    cin >> second_polinom;
                    new_polinom = created_polinoms[first_polinom - 1] * created_polinoms[second_polinom - 1];
                    new_polinom.print();
                }
            }
        }
    }
    return 0;
}