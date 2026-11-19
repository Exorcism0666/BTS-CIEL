#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    float moyenne = 0;

    cout << "Entrez votre moyenne du BAC : ";
    cin >> moyenne;

    if (moyenne < 0 || moyenne > 20) {
        cout << "Vous avez introduit une mauvaise valeur." << endl;
    }
    else if (moyenne >= 0 && moyenne < 8) {
        cout << "Vous passez au second groupe." << endl;
    }
    else if (moyenne >= 8 && moyenne < 12) {
        cout << "Vous avez le BAC sans mention." << endl;
    }
    else if (moyenne >= 12 && moyenne < 14) {
        cout << "Vous avez le BAC avec mention assez bien." << endl;
    }
    else if (moyenne >= 14 && moyenne < 16) {
        cout << "Vous avez le BAC avec mention bien." << endl;
    }
    else if (moyenne >= 16 && moyenne < 18) {
        cout << "Vous avez le BAC avec mention très bien." << endl;
    }
    else if (moyenne >= 18 && moyenne < 20) {
        cout << "Vous avez le BAC avec mention très bien avec les félicitations du jury." << endl;
    }
    return 0;
}