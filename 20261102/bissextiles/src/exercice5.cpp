#include <iostream>
using namespace std;

int main() {
     // Déclaration et initialisation des variables :
    int annee = 0;
    int somme1 = 0;
    int somme2 = 0;
    int somme3 = 0;

    // Saisie de l'année :
    cout << "Veuillez saisir une année : ";
    cin >> annee;

    // Calcul du reste pour chaque sommme :
    somme1 = annee % 4;
    somme2 = annee % 100;
    somme3 = annee % 400;

    // Déterminer si c'est une année bissextiles ou non
    if (somme1 != 0 || (somme1 == 0 && somme2 == 0 && somme3 != 0)) cout << "Ce n'est pas une année bissextiles" << endl;
    else cout << "C'est une année bissextiles" << endl;
    return 0;
}