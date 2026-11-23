#include <iostream>
using namespace std;

void moyenne(int moy) {
    if (moy % 2 == 0) cout << "c'est un nombre pair" << endl;
    else cout << "ce n'est pas un nombre pair" << endl;
}

int main () {
    int valeur;
    cout << "Entrez une valeur : ";
    cin >> valeur;
    moyenne(valeur);
}