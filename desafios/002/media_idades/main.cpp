#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "dados da primeira pessoa: " << endl;
    cout << "nome: ";
    getline(cin, nome1);
    cout << "idade: ";
    cin >> idade1;

    cout << "dados da segunda pessoa: " << endl;
    cout << "nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "idade: ";
    cin >> idade2;

    media = (double)(idade1 + idade2) / 2;

    cout << "a idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos";



    return 0;
}
