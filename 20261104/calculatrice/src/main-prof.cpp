#include <iostream>
using namespace std;

int main()
{
    // Déclaration variables
    int nb1, nb2;
    float resultat;
    char choixMenu;

    // Boucle principale
    do
    {
        // Saisie des nombres
        cout << "nb1 = ";
        cin >> nb1;
        cout << "nb2 = ";
        cin >> nb2;

        // Menu
        cout << "Choix de l'opération à effectuer : " << endl;
        cout << "---------------------------------- " << endl;
        cout << "Addition (a)" << endl;
        cout << "Soustraction (s)" << endl;
        cout << "Division (d)" << endl;
        cout << "Multiplication (m)" << endl;
        // ...
        cout << "Quitter (q)" << endl;

        cin >> choixMenu;

        switch(choixMenu) {
            case 'a':
            cout << nb1 << " + " << nb2 << " = " << nb1 + nb2 << endl;
            break;

            case 's':
            cout << nb1 << " - " << nb2 << " = " << nb1 - nb2 << endl;
            
            case 'd':
            cout << nb1 << " / " << nb2 << " = " << nb1 / nb2 << endl;
            
            case 'm':
            cout << nb1 << " * " << nb2 << " = " << nb1 * nb2 << endl;
            
            case 'q':
            break;

            default:
            cout << "Erreur de saisie !" << endl;
        }

    } while (choixMenu != 'q');

    return 0;
}

