#include <iostream>
using namespace std;

int main() {
    // Déclaration et initialisation de la variable :
    int mention = 0;

    // Saisie de la note :
    cout << "Saisissez votre note du BAC : ";
    cin >> mention;

    // Affichage en fonction de la mention :
    if (mention < 10) cout << "Vous êtes recalé" << endl;
    else if (mention >= 10 && mention < 12) cout << "Vous avez la mention passable" << endl;
    else if (mention >= 12 && mention < 14) cout << "Vous avez la mention assez bien" << endl;
    else if (mention >= 14 && mention < 16) cout << "Vous avez la mention bien" << endl;
    else if (mention >= 16) cout << "Vous avez la mention très bien" << endl;
    return 0;
}