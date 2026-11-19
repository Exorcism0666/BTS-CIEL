#include <iostream>
using namespace std;

int main() {
    // Déclaration et initialisation de la variable :
    int age = 0;

    // Saisie de l'âge :
    cout << "Veuillez saisir votre âge : ";
    cin >> age;

    // Affichage en fonction de l'âge :
    if (age <= 0) {
        cout << "âge non conforme." << endl;
        return 1;
    }
    else if (age < 18) {
        cout << "Vous êtes mineur." << endl;
    }
    else if (age >= 18 && age < 65) {
        cout << "Vous êtes majeur." << endl;
    }
    else if (age >= 65) {
        cout << "Vous êtes senior." << endl;
    }
    return 0;
}