/***********************************
Programme Exercice 3
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/

#include <iostream>
using namespace std;

int main() {
    // Déclarer les variables
    int a = 0, b = 0, c = 0;

    // Demander à l'utilisateur une valeur pour A et B
    cout << "Saisir une valeur pour A : ";
    cin >> a;
    cout << "Saisir une valeur pour B : ";
    cin >> b;

    // Echanger la valeur des variables de A et de B
    c = b;
    b = a;
    a = c;

    // Afficher les résultats
    cout << "La valeur de A est : " << a << ", et la valeur de B est : " << b << endl;
    return 0;
}