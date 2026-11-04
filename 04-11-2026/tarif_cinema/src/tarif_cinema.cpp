#include <iostream>
using namespace std;

int main () {
    int age = 0;
    int jour = 0;

    do {
        cout << "Quel âge avez-vous : ";
        cin >> age;
    } while (age < 0 || age > 120);
    do {
        cout << "Quel jours on est (1-7): ";
        cin >> jour;
    } while (jour < 1 || jour > 7);


    if (jour == 3) {
        cout << "Tarif à 2€" << endl;
    }
    else {
        if (age <= 12) {
            cout << "Tarif à 5€" << endl;
        }
        else {
            if (age >= 65) {
                cout << "Tarif à 6€" << endl;
            }
            else {
                cout << "Tarif à 10 €" << endl;
            }
        }
    }
    return 0;
}