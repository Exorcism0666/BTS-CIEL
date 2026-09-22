#include <iostream>

using namespace std;

int main()
{
    float a = 7;
    float b = 7;
    float c = 7;
    float d = 7;
    float resultat = 0;

    if (b == 0 || d == 0)
    {
        cout << "Division impossible." << endl;
    }
    else
    {
        resultat = ((a * d / b * d) + (c * b / b * d));
        cout << "resultat = " << resultat << endl;
    }

    return 0;
}