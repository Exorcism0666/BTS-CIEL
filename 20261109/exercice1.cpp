#include <iostream>
using namespace std;

int main() {
    int t[10], i;

    for (i = 0; i < 10; i++) {
        cout << "Saisissez la valeur numéro " << i << " : ";
        cin >> t[i];
    }
    for (i = 0; i < 10; i++) {
        if (t[i] >= 10) cout << t[i] << endl;
    }
    return 0;
}