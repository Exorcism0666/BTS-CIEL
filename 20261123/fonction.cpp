#include <iostream>
using namespace std;

void b() {
    cout << "Bonjour !" << endl;
}

int main() {
    cout << "Good morning !" << endl;
    b();
    cout << "Guten Morgen !" << endl;
    b();
    b();
    cout << "Kaliméra!" << endl;
    b();

    return 0;
}