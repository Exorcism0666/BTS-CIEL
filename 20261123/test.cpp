#include <iostream>
using namespace std;

int f (int &n) { 
    n = n + 1;
    return n;
}

int main() {
    int a = 4;
    cout << "addresse de la case mémoire : " << &a << endl;
    cout << a << endl;
    cout << f(a) << endl;
    cout << a << endl;
    return 0;
}