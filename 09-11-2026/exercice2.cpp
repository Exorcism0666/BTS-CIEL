#include <iostream>
using namespace std;

int main() {
    int t[10], i, V;

    for (i = 0; i < 10; i++) {
        cout << "Saisissez la valeur numéro " << i << " : ";
        cin >> t[i];
    }

    cout << "Saisissez la valeur V ";
    cin >> V;

    for (i = 0; i < 10; i++) {
        if (V == t[i]) cout << "V se trouve dans le tableau" << endl;
        else cout << "V ne se trouve pas dans le tableau" << endl;
    }
    return 0;
}