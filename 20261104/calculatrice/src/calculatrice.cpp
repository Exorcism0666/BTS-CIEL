#include <iostream>
using namespace std;

int main() {
    int nb1 = 0;
    int nb2 = 0;
    float resultat;
    char choisiMenu;

    do {
        cout << "Bienvenue sur la calcularice!\n" << endl;
        cout << "Menu:" << endl;
        cout << "- a : Addition" << endl;
        cout << "- s : Soustraction" << endl;
        cout << "- d : Division" << endl;
        cout << "- m : Multiplication" << endl;
        cout << "- q : Quitter" << endl;
        cout << "Quel est votre choix : " << endl;
        cin >> choisiMenu;
            if (choisiMenu == 'a') {
                cout << "Choisissez un premier nombre : ";
                cin >> nb1;
                cout << "Choisissez un deuxième nombre: ";
                cin >> nb2;
                resultat = nb1 + nb2;
                cout << nb1 << " + " << nb2 << " = " << resultat << endl;
                return 0;
            }
            else if (choisiMenu == 's') {
                cout << "Choisissez un premier nombre : ";
                cin >> nb1;
                cout << "Choisissez un deuxième nombre: ";
                cin >> nb2;
                resultat = nb1 - nb2;
                cout << nb1 << " - " << nb2 << " = " << resultat << endl;
                return 0;
            }
            else if (choisiMenu == 'd') {
                cout << "Choisissez un premier nombre : ";
                cin >> nb1;
                cout << "Choisissez un deuxième nombre: ";
                cin >> nb2;
                resultat = nb1 / nb2;
                cout << nb1 << " / " << nb2 << " = " << resultat << "," << nb1 % nb2 << endl;
                return 0;
            }
            else if (choisiMenu == 'm') {
                cout << "Choisissez un premier nombre : ";
                cin >> nb1;
                cout << "Choisissez un deuxième nombre: ";
                cin >> nb2;
                resultat = nb1 * nb2;
                cout << nb1 << " * " << nb2 << " = " << resultat << endl;
                return 0;
            }
            else {
                return 0;
            }
    } while (choisiMenu == 'a' || choisiMenu == 's' || choisiMenu == 'd' || choisiMenu == 'm' || choisiMenu == 'q');
    return 0;
}