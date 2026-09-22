/***********************************
Programme Exercice 1
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/

#include <iostream>
using namespace std;

int main()
{
    // Déclarer les variables
    float longue = 0;
    float larg = 0;
    float perimetre = 0;
    float surface = 0;

    // Demander à l'utilistaeur la longueur et la largeur
    cout << "Saisir une longueur : ";
    cin >> longue;
    cout << "Saisir une largeur : ";
    cin >> larg;

    // Calcul pour le perimetre et la surface
    perimetre = (longue * 2) + (larg * 2);
    surface = longue * larg;

    // Afficher les résultats
    cout << "Le perimetre est de : " << perimetre << " m \nEt la surface est de : " << surface << " m2" << endl;
    return 0;
}