#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << "Vous avez quel age ? ";
    cin >> age;
    if (age < 18) {
        cout << "Vous etes mineur." << endl;
    }
    else {
        cout << "Vous etes majeur." << endl;
    }
}