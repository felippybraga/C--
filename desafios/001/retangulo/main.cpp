#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << fixed << setprecision(4);
    cout << "base do retangulo: ";
    cin >> base;

    cout << "altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = (altura * 2) + (base * 2);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << area << endl;
    cout << perimetro << endl;
    cout << diagonal << endl;


    return 0;
}
