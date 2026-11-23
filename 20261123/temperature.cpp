#include <iostream>
using namespace std;

void conversion(int celsius) {
    int fahrenheit = 0;
    fahrenheit = ((celsius * 9.0 / 5.0) + 32);
    cout << "La valeur en fahrenheit est de : " << fahrenheit <<  " °F" << endl;
}

int main() {
    int valeur;
    cout << "Entrez une température en celsius : ";
    cin >> valeur;
    conversion(valeur);
    return 0;
}