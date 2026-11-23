#include <iostream>
using namespace std;

int addition(int &a, int &b) {
    a = a * a;
    b = b * b;
    return (a + b);
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << "Avant : a = " << a << ", b = " << b << endl;
    cout << "Résultat : " << addition(a, b) << endl;
    cout << "Après : a = " << a << ", b = " << b << endl;
}