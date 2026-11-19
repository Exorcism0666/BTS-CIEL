#include <iostream>
using namespace std;

int main()
{

    int age = 0;
    string status;
    bool accesVIP;

    if ((age < 18 || status == "etudiant") && !accesVIP)
    {
        cout << "Accès au tarif réduit autorisé." << endl;
    }
    else
    {
        cout << "Tarif normal ou accès refusé." << endl;
    }
    return 0;
}