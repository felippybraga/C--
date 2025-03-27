#include <bits/stdc++.h>


using namespace std;

int main()
{
    string nome1, nome2;
    int idade;
    double salario1, salario2;
    char sexo;


    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "salario da primeira pessoa: ";
    cin >> salario1;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "salario da segunda pessoa: ";
    cin >> salario2;

    cout << "digite a idade: ";
    cin >> idade;
    cout << "digite um sexo (F/M)";
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;

    return 0;
}
