#include <iostream>

int ageEtudiant;
char statusScolaire;

using namespace std;

int main() {
    ageEtudiant = 20;
    statusScolaire = 'E';
    cout << "M.Morin bonjour \nJ'ai " << ageEtudiant << " ans et je suis sous status scolaire: " << statusScolaire << "\nEt la taille de ma variable 'ageEtudiant' est de: " << sizeof(ageEtudiant) << " octets" << endl;
    return 0;
}