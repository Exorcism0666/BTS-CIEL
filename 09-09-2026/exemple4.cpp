#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c, d, e, f;

    c = a + b;
    d = a * c;
    d = d - 80;
    e = d / 7;
    f = e % 4;

    cout << "La valeur de f est : " << f << endl;
    return 0;
}