#include <iostream>

using namespace std;

int main() {
    int a;
    bool c, d;
    cout << "Saisissez une valeur entière : ";
    cin >> a;

    c = (a < 3);
    d = (a > 20);
    if (c || d) cout << "Gagné !" << endl;
    else cout << "Perdu !" << endl;
    return 0;
}