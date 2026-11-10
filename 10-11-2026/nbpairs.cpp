#include <iostream>
using namespace std;

int main() {
    int somme = 0;
    int const N = 17;

    for (int i = 1; i <= (N - 1); i++) {
        // somme = i + somme;
        if (i % 2 == 0) cout << i - 1 << ", ";
    }

    return 0;
}