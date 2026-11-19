#include <iostream>
using namespace std;

int main() {
    int nb = 0;
    int somme = 0;
    long int factorielle = 1;
    int paire = 0;

    cout << "Entrez un nombre : ";
    cin >> nb;

    for (int i = 1; i <= nb; i++) {
        //somme += i; //somme = somme + i
        //factorielle *= i; //factorielle = factorielle * i
        if (i % 2 == 0) cout << i << " ";
    }
    //cout << "\nSomme des nombres = " << somme << endl;
    //cout << "\nFactorielle de " << nb << "! = " << factorielle << endl;
    return 0;
}