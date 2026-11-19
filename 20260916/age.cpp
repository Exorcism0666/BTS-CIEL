#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int age = 0;

    cout << "Saisir un âge : ";
    cin >> age;

    if (age <= 0) {
        cout << "Attention, vous avez saisie une mauvaise valeur." << endl;
    }
    else if (age < 18)
    {
        cout << "Vous êtes mineur." << endl;
    }
    else if (age < 65)
    {
        cout << "Vous êtes majeur." << endl;
    }
    else
    {
        cout << "Vous êtes senior." << endl;
    }

    return 0;
}