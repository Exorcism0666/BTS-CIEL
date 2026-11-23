#include <iostream>
using namespace std;

void minmax(int i, int j, int &min, int &max) {
    if (i < j) {min = i; max = j;}
    else {min = j; max = i;};
}

int main() {
    int a, b, w, x;
    cout << "Tapez la valeur de a : "; cin >> a;
    cout << "Tapez la valeur de b : "; cin >> b;

    minmax(a, b, w, x);

    cout << "Le plus petit vaut : " << w << endl;
    cout << "Le plus grand vaut : " << x << endl;

    return 0;
}