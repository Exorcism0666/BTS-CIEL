#include <iostream>
using namespace std;

int main() {
    int annee;

    cout << "Entrez une année : ";
    cin >> annee;

    if (annee % 400 == 0 || annee % 4 == 0 && annee % 100 != 0)
    {
        cout << "Année bissextile." << endl;
    }
    else {
        cout << "L'année n'est pas bissextile." << endl;
    }

    return 0;
}