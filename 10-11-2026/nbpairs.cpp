#include <iostream>
using namespace std;

int main() {
    int somme = 0;
    int const N = 18;

    for (int i = 0; i <= (N - 1); i++) {
        // somme = i + somme;
        if (i % 2 == 0) cout << i << ", ";
    }

    cout << N << endl;
    return 0;
}