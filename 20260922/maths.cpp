#include <iostream>

using namespace std;

int main()
{
    float a = 1;
    float b = 2;
    float c = 3;
    float d = 4;
    float resultat = 0;
    float numerateur = 0;
    float denominateur = 0;

    if (b == 0 || d == 0)
    {
        cout << "Division impossible." << endl;
    }
    else
    {
        resultat = (((a * d) / (b * d)) + ((c * b) / (b * d)));
        numerateur = ((a * d) + (c * b));
        denominateur = b * d;
        cout << "resultat = " << resultat << " et le résultat en fraction " << numerateur << "/" << denominateur << endl;
        if (resultat <= 1) {
            cout << "Ce n'est pas un nombre premier." << endl;
        }
        for (int i = 2; i <= resultat / i; i++) {
            
        }
    }
    return 0;
}
