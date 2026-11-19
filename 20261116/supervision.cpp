#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  cout << fixed << setprecision(1);
  // Déclaration des constantes.
  const int NB_RELEVES = 8;
  const int NB_SONDES = 4;
  const int NB_MESURES = 6;
  const double SEUIL_ALERTE = 30.0;
  const double SEUIL_CRITIQUE = 35.0;
  const double TEMP_MIN = -10.0;
  const double TEMP_MAX = 60.0;

  // Déclaration entier pour savoir combien d'alerte
  int calcNormal = 0;
  int calcAlerte = 0;
  int calcCritique = 0;

  // Déclaration du tableau (initialisé à 0 par sécurité)
  double temp[NB_RELEVES] = {0};

  // Déclaration menu
  int menu = 0;

  bool saisieFaite = false;

  do {
    cout << "\n===== Supervision de la salle serveur =====" << endl;
    cout << "1. Saisir les relevés de la sonde de référence" << endl;
    cout << "2. Afficher les relevés et leur état" << endl;
    cout << "3. Statistiques (min, max, moyenne)" << endl;
    cout << "4. Afficher le tableau des 4 sondes" << endl;
    cout << "5. Analyser les 4 sondes" << endl;
    cout << "6. Détecter les dérives (bonus)" << endl;
    cout << "0. Quitter" << endl;
    cout << "Votre choix : ";
    cin >> menu;

    switch (menu) {
    case 1:
      cout << "Saisissez 8 valeurs de températures" << endl;
      for (int i = 0; i < NB_RELEVES; i++) {
        do {
          cout << "Relevé " << i + 1 << " (de -10.0 à 60.0°C) : ";
          cin >> temp[i];
          if (TEMP_MIN > temp[i] || TEMP_MAX < temp[i])
            cout << "Valeur incohérente, recommencez." << endl;
        } while (TEMP_MIN > temp[i] || TEMP_MAX < temp[i]);
      }
      saisieFaite = true;
      break;

    case 2: {
      if (saisieFaite == true) {
        // Remise à zéro avant de recompter
        calcNormal = 0;
        calcAlerte = 0;
        calcCritique = 0;

        for (int i = 0; i < NB_RELEVES; i++) {
          if (temp[i] < SEUIL_ALERTE) {
            cout << "Relevé " << i + 1 << " : " << temp[i] << " °C -> NORMAL"
                 << endl;
            calcNormal += 1;
          } else if (SEUIL_ALERTE <= temp[i] && temp[i] < SEUIL_CRITIQUE) {
            cout << "Relevé " << i + 1 << " : " << temp[i] << " °C -> ALERTE"
                 << endl;
            calcAlerte += 1;
          } else if (temp[i] >= SEUIL_CRITIQUE) {
            cout << "Relevé " << i + 1 << " : " << temp[i] << " °C -> CRITIQUE"
                 << endl;
            calcCritique += 1;
          }
        }
        cout << "Normal : " << calcNormal << ", alerte : " << calcAlerte
             << ", critique : " << calcCritique << endl;
      } else {
        cout << "Saisissez d'abord les relevés (choix 1)." << endl;
      }
      break;
    }
    case 3: {
      double minimum = temp[0];
      double maximum = temp[0];
      double somme = 0;
      double moyenne = 0;

      for (int i = 0; i < NB_RELEVES; i++) {
        if (temp[i] < minimum)
          minimum = temp[i];
        if (temp[i] > maximum)
          maximum = temp[i];
        somme += temp[i];
      }
      moyenne = somme / NB_RELEVES;

      cout << "\nMinimum : " << minimum << " °C" << endl;
      cout << "Maximum : " << maximum << " °C" << endl;
      cout << "Moyenne : " << moyenne << " °C" << endl;
      break;
    }
    case 4: {
      double releves[NB_SONDES][NB_MESURES] = {
          {22.5, 24.0, 28.5, 31.0, 36.2, 33.4},
          {21.0, 21.5, 22.0, 22.5, 23.0, 24.0},
          {26.0, 27.5, 29.0, 30.5, 32.0, 34.5},
          {19.0, 20.0, 20.5, 20.0, 19.8, 20.2}};

      // Affichage du titre des colonnes
      cout << setw(7) << "  Sonde|";

      for (int j = 0; j < 6; j++) {
        cout << setw(7) << ("R" + to_string(j + 1));
      }
      cout << endl;
      // Affichage des données
      for (int i = 0; i < 4; i++) {
        cout << setw(7) << i + 1 << "|";
        for (int j = 0; j < 6; j++) {
          cout << setw(7) << releves[i][j];
        }
        cout << endl;
      }
    }
    }
  } while (menu != 0);
  return (0);
}