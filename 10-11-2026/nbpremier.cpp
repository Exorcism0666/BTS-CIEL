#include <iostream>
using namespace std;

int main () {
    int n, nombre, d;
    bool premier_facteur = false;

    cout << "Entrez un entier ≥ 2 : ";
    cin >> n;
    
    if (n < 2) cout << "Nombre invalide" << endl;
    else {
        nombre = n;
        d = 2;
        premier_facteur = true;

        cout << nombre << " = ";

        while (d * d <= n) {
            while (n % d == 0) {
                if (premier_facteur == false) {
                    cout << " x ";
                }
                cout << d;
                premier_facteur = false;
                n = n / d;
            }
            d = d + 1;
        }
        if (n > 1) {
            if (premier_facteur == false) {
                cout << " x ";
            }
            cout << n;
        }
    }
    return 0;
}