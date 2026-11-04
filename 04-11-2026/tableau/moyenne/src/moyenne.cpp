#include <iostream>
using namespace std;

int main() {
    int t[4], i;
    double s = 0;

    for (i = 0; i < 4; i++) {
        cout << "Tapez la valeur N° " << i << " : ";
        cin >> t[i];
        s = s + t[i];
    }
    s = s / 4;
    cout << "La moyenne des 4 valeurs est : " << s << endl;
    return 0;
}