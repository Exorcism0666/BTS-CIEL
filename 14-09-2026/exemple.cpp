#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Tapez la valeur de a : ";
    cin >> a;
    if (a > 10) {
        cout << "Gagné !" << endl;
    }
    else {
        cout << "Perdu" << endl;
    }
    cout << "Le programme est fini" << endl;
    return 0;
}