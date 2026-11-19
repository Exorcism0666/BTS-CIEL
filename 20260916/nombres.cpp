#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    double a = 0, b = 0;

    cout << "Saisir une valeur pour A : ";
    cin >> a;

    cout << "Saisir une valeur pour B : ";
    cin >> b;

    if (a < b)
    {
        cout << "La valeur de A (" << a << ") est plus petit que la valeur B (" << b << ")" << endl;
    }
    else if (a == b)
    {
        cout << "La valeur de A (" << a << ") est pareil que la valeur B (" << b << ")" << endl;
    }
    else
    {
        cout << "La valeur de A (" << a << ") est plus grande que la valeur B (" << b << ")" << endl;
    }

    return 0;
}