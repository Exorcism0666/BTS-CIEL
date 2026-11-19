#include <iostream>

using namespace std;

int main()
{

    int date = 0;
    int jour = 0;
    int mois = 0;
    string nomMois;

    cout << "Entrez une date : ";
    cin >> date;

    jour = date / 100;
    mois = date % 100;

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
    cout << jour << " " << nomMois << endl;
    return 0;
}