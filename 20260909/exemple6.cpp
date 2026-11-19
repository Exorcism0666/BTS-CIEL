#include <iostream>
using namespace std;

int main() {
    double a, b, moy;
    cout << "Tapez une valeur réelle : ";
    cin >> a;
    cout << "Tapez une valeur réelle : ";
    cin >> b;

    moy = (a + b) / 2;
    
    cout << "La moyenne des 2 réels est : " << moy << endl;

    return 0;
}