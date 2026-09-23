#include <iostream>

using namespace std;

int main()
{

    int date = 0;
    int jour = 0;
    int mois = 0;
    int annee = 0;
    string nomMois;

    cout << "Entrez une date : ";
    cin >> date;

    annee = date / 10000;
    mois = (date % 10000) / 100;
    jour = (date % 10000) % 100;

    if (jour < 1 || jour > 31 || mois < 1 || mois > 12)
    {
        cout << "Date invalide." << endl;
        return 1;
    }
    switch (mois)
    {
    case 1:
        nomMois = "Janvier";
        break;
    case 2:
        nomMois = "Fevrier";
        break;
    case 3:
        nomMois = "Mars";
        break;
    case 4:
        nomMois = "Avril";
        break;
    case 5:
        nomMois = "Mai";
        break;
    case 6:
        nomMois = "Juin";
        break;
    case 7:
        nomMois = "Juillet";
        break;
    case 8:
        nomMois = "Aout";
        break;
    case 9:
        nomMois = "Septembre";
        break;
    case 10:
        nomMois = "Octobre";
        break;
    case 11:
        nomMois = "Novembre";
        break;
    case 12:
        nomMois = "Decembre";
        break;
    default:
        nomMois = "Erreur";
        break;
    }

    cout << jour << " " << nomMois << " " << annee << endl;
    return 0;
}