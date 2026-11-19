#include <iostream>
using namespace std;

int main() {
  int magnitude = 0;

  cout << "Entrez une valeur de magnitude correspondant à l'échelle de Ritcher : ";
  cin >> magnitude;

  switch (magnitude) {
  case 1:
    cout << "Secousse imperceptible" << endl;
    break;
  case 2:
    cout << "Secousse ressentie uniquement par des gens au repos" << endl;
    break;
  case 3:
    cout << "Seuil à partir duquel la secousse devient sensible pour la plupart des gens" << endl;
    break;
  case 4:
    cout << "Secousse sensible, mais pas de dégâts" << endl;
    break;
  case 5:
    cout << "Tremblement fortement ressenti, dommages mineurs près de l'épicentre" << endl;
    break;
  case 6:
    cout << "Dégâts à l'épicentre dont l'ampleur dépend de la qualité des constructions" << endl;
    break;
  case 7:
    cout << "Importants dégâts à l'épicentre, secousse ressentie à plusieurs centaines de km" << endl;
    break;
  case 8:
    cout << "Dégâts majeurs à l'épicentre, et sur plusieurs centaines de km" << endl;
    break;
  case 9:
    cout << "Destruction totale à l'épicentre, et possible sur plusieurs milliers de km" << endl;
    break;
  default:
    cout << "L'échelle va de 1 à 9, veuillez relancer le programme" << endl;
    break;
  }
  return 0;
}