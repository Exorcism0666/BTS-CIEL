/***********************************
Programme Exercice 5
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 0, b = 0, result = 0;

    cout << "Donne moi une valeur pour le point A : ";
    cin >> a;
    cout << "Donne moi une valeur pour le point B : ";
    cin >> b;

    result = sqrt(pow(a, 2) + pow(b, 2));
    cout << "La distance entre les points A et B sont de : " << result << endl;
    return 0;
}