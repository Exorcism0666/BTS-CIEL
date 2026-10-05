#include <iostream>
using namespace std;

int main() {
  int nombre = 53;
  int nbSaisi = 0;

  cout << "---------------------------------\n" << endl;
  cout << " Jeu : Deviner un nombre \n" << endl;
  cout << "---------------------------------\n" << endl;

  cout << "Veuillez saisir un nombre entier : ";
  cin >> nbSaisi;
  while (nbSaisi < 1 || nbSaisi > 100) {
    cout << "Le nombre " << nbSaisi
         << "n'est pas dans la plage.\nVeuillez saisir un nombre valide : " cin
         << nbSaisi;
  }

  // boucle "principale"
  while (nbSaisi != nombre) {
    cout << "Perdu ! Recommencez : ";
    cin >> nbSaisi;
    // boucle "TANT QUE" si le nombre n'est pas bien saisi
    while (nbSaisi < 1 || nbSaisi > 100) {
      cout
          << "Le nombre " << nbSaisi
          << "n'est pas dans la plage.\nVeuillez saisir un nombre valide : " cin
          << nbSaisi;
    }
  }
  cout << "Gagné !" << endl;
  return 0;
}