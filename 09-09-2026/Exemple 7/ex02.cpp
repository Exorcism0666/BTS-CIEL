/***********************************
Programme Exercice 2
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/

#include <iostream>
using namespace std;

int main() {
    // Déclarer les variables
    int a, b;

    // Initialiser les variables
    a = 0;
    b = 0;

    // Demander à l'utilistaeur 5 fois un nombres
    for (int i = 0; i < 5; i++) {
        cout << "Donne moi un nombre : ";
        cin >> a;
        // Faire la somme des nombres
        b = b + a;
    }

    // Diviser pour obtenir la moyenne
    b = b / 5;

    // Afficher les résultats
    cout << "La moyenne est de : " << b << endl;
    return 0;
}