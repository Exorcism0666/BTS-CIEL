/**********************************
Calculateur de Prix TTC
v1.0.0
Dubus Yanis - 21/09/2026
Lycée Jules Verne - Mondeville (14)
**********************************/

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Déclarer et initialiser les variables
    double prixHT = 0;
    double tauxTVA = 0.20;
    double prixTTC = 0;

    // Demander à l'utilisateur le prix HT
    cout << "Saisissez le prix HT de l'article : ";
    cin >> prixHT;

    // Calcul pour avoir le prix TTC.
    prixTTC = prixHT * (1 + tauxTVA);

    // Afficher le résultat.
    cout << "Le prix TTC de l'article est de : " << prixTTC << " euros" << endl;
    return 0;
}