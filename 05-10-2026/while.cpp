#include <iostream>
using namespace std;

int main() {
    int nombre = 53;
    int nbSaisi = 0;

    cout << "---------------------------------\n" << endl;
    cout << " Jeu : deviner un nombre \n" << endl;
    cout << "---------------------------------\n" << endl;

    cout << "Veuillez saisir un nombre entier : ";
    cin >> nbSaisi;
    while (nbSaisi < 1 || nbSaisi > 100) {
        cout "Nombre incorrecte, veuillez saisir un nombre entre 1 et 100 :";
        cin << nbSaisi;
    }

    while (nbSaisi != nombre) {
        cout << "Perdu ! Recommencez : ";
        cin >> nbSaisi;
    }
    cout << "Gagné !" << endl;
    return 0;
}