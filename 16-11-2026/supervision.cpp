#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << fixed << setprecision(1);
    // Déclaration des constantes.
    const int NB_RELEVES = 8;
    const int NB_SONDES = 4;
    const double SEUIL_ALERTE = 30.0;
    const double SEUIL_CRITIQUE = 35.0;
    const double TEMP_MIN = -10.0;
    const double TEMP_MAX = 60.0;
    
    // Déclaration entier pour savoir combien d'alerte
    int calcNormal = 0;
    int calcAlerte = 0;
    int calcCritique = 0;

    // Déclaration du tableau
    double temp[NB_RELEVES];

    int minimum = temp[0];
    int maximum = temp[0];
    double somme = 0;
    double moyenne = 0;

    cout << "Saisissez 8 valeurs de températures" << endl;

    // Saisir le degré de la salle serveur.
    for (int i = 0; i < NB_RELEVES; i++) {
        do {
            cout << "Relevé " << i + 1 << " (de -10.0 à 60.0°C) : ";
            cin >> temp[i];
            // Vérification
            if (TEMP_MIN > temp[i] || TEMP_MAX < temp[i]) cout << "Valeur incohérente, recommencez." << endl;
        } while (TEMP_MIN > temp[i] || TEMP_MAX < temp[i]);
        if (temp[i] < SEUIL_ALERTE){
            cout << "-> NORMAL" << endl;
            calcNormal += 1;
        }
        else if (SEUIL_ALERTE <= temp[i] && temp[i] < SEUIL_CRITIQUE){
            cout << "-> ALERTE" << endl;
            calcAlerte += 1;
        }
        else if (temp[i] >= SEUIL_CRITIQUE){
            cout << "-> CRITIQUE" << endl;
            calcCritique += 1;
        }
    }
    for (int i = 0; i < NB_RELEVES; i++) {
        if (minimum > temp[i]) minimum = temp[i];
    }
    for (int i = 0; i < NB_RELEVES; i++) {
        if (maximum < temp[i]) maximum = temp[i];
    }
    cout << "Normal : " << calcNormal << ", alerte : " << calcAlerte << ", critique : " << calcCritique << endl;
    cout << "\nMinimum : " << minimum << " °C" << endl;
    cout << "\nMaximum : " << maximum << " °C" << endl;
    return 0;
}