#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qtpessoas, cont;
    double media, soma, percentual;


    cout << "quantas pessoas serao digitadas? ";
    cin >> qtpessoas;

    string nomes[qtpessoas];
    int idades[qtpessoas];
    double alturas[qtpessoas];

    cin.ignore(INT_MAX, '\n');
    for(int i = 0; i < qtpessoas; i++) {

        cout << "dados da " << i+1 << "a pessoa: " << endl;

        cout << "nome: ";
        getline(cin, nomes[i]);


        cout << "idade: ";
        cin >> idades[i];

        cout << "altura: ";
        cin >> alturas[i];

        cin.ignore(INT_MAX, '\n');
    }

    cout << "" << endl;

    soma = 0;
    for(int i = 0; i < qtpessoas; i++) {
        soma = soma + alturas[i];
    }
    media = soma / qtpessoas;

    cout << fixed << setprecision(2);
    cout << "altura media: " << media << endl;

    cont = 0;
    for(int i = 0; i < qtpessoas; i++) {
        if(idades[i] < 16) {
            cont++;
        }
    }

    percentual = cont * 100.0 / qtpessoas;

    cout << fixed << setprecision(1);
    cout << "pessoas com menos de 16 anos:" <<  percentual << "%" << endl;

    for(int i = 0; i < qtpessoas; i++) {
        if(idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }


    return 0;
}
