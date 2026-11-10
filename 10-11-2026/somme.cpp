#include <iostream>
using namespace std;

int main() {
    int somme = 0;
    int const N = 18;

    for (int i = 0; i <= 18; i++) {
        somme = i + somme;
    }

    cout << "Somme de 0 à " << N << " = " << somme << endl;
    return 0;
}