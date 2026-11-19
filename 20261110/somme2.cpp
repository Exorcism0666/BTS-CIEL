#include <iostream>
using namespace std;

int main() {
    int somme = 0;
    int const N = 18;

    cout << "somme = ";

    for (int i = 1; i <= (N - 1); i++) {
        // somme = i + somme;
        cout << i << " + ";
    }

    cout << N << endl;
    return 0;
}