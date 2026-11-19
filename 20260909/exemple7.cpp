/***********************************
Programme de test avec int et double
Auteur: Yanis Dubus
Lycée Jules Verne - Mondeville (14)
***********************************/

#include <iostream>
using namespace std;

int main() {
    int a;
    double b;

    // Saisir la variable a
    cout << "Saisissez une valeur entière : ";
    cin >> a;

    // la valeur de a est la même que b
    b = a;
    cout << "La valeur de b vaut : " << b << endl;

    // Saisir une nouvelle valeur pour la variable b
    cout << "Saisissez maintenant une valeur réelle (attention, la virgule est représentée par un point : 1.68 et pas 1,68) ";
    cin >> b;

    // Transforme b en int
    a = int(b);
    cout << "La valeur de a vaut : " << a << endl;
    
    // Retour à la fonction main :
    return 0;
}