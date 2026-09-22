#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int taux = 0;
    double prixHT = 0;
    double prixTTC = 0;

    cout << "Donnez le taux que vous voulez appliquer :\n1) Taux normal\n2) Taux intermédiaire\n3) Taux réduit\n4) Taux particulier\n";
    cin >> taux;

    // Demander à l'utilisateur le prix HT
    cout << "Saisissez le prix HT de l'article : ";
    cin >> prixHT;

  switch (taux) {
    case 1:
        prixTTC = prixHT * (1 + 0.20);
        cout << "Le prix TTC de l'article est de : " << prixTTC << " euros" << endl;
        break;
    case 2:
        prixTTC = prixHT * (1 + 0.10);
        cout << "Le prix TTC de l'article est de : " << prixTTC << " euros" << endl;
        break;
    case 3:
        prixTTC = prixHT * (1 + 0.055);
        cout << "Le prix TTC de l'article est de : " << prixTTC << " euros" << endl;
        break;
    case 4:
        prixTTC = prixHT * (1 + 0.021);
        cout << "Le prix TTC de l'article est de : " << prixTTC << " euros" << endl;
        break;
  }
  return 0;
}