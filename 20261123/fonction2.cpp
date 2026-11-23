#include <iostream>
using namespace std;

double b(double x, double y) {
    double m;
    m = (x + y) / 2;
    return m;
}

int main() {
    double a;
    a = b(3.2, 4.2);
    cout << "Le résultat vaut : " << a << endl;
    return 0;
}