/***********************************
Programme Exercice 4
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/
#include <iostream>

using namespace std;

int main() {
    // Déclarer + initialiser les variables
    float HT = 0, TVA = 0, kilo = 0;

    // Demander chaque valeur à l'utilisateur
    cout << "Saisir le kilo de tomates : ";
    cin >> kilo;

    cout << "Saisir la valeur du prix HT ";
    cin >> HT;

    cout << "Saisir le taux de TVA : ";
    cin >> TVA;

    // Faire le calcul pour obtenir le prix TTC
    HT = HT * kilo;
    TVA = TVA * HT;

    // Afficher le résultat
    cout << "Le kilo de tomates est de : " << kilo << ", le prix HT est de : " << HT << ", et donc après la TVA, le prix TTC est de : " << TVA <<  " euros" << endl;
    return 0;
}