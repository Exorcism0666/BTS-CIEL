#include <iostream>
using namespace std;

int main() {
  int niv = 1;

  cout << "Quel est le niveau d'intensité du séisme ? ";
  cin >> niv;

  switch (niv) {
  case 1:
    cout << "Micro-séisme qui est impossible à ressentir." << endl;
    break;
  case 2:
    cout << "Micro-séisme qui est impossible à ressentir mais qui est "
            "enregistrable par les sismomètres."
         << endl;
    break;
  default:
    cout << "Vous avez fait une erreur de saisie (niveaux compris entre 1 et 9 "
            "inclus)..."
         << endl;
  }
  return 0;
}