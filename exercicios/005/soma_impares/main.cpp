#include <iostream>

using namespace std;

int main()
{
    int n1, n2, troca, soma;

    cout << "digite dois numeros: " << endl;
    cin >> n1 >> n2;

    if(n1 > n2) {
        troca = n1;
        n1 = n2;
        n2 = troca;
    }
    soma = 0;
    for(int i = n1 + 1; i < n2; i++) {
        if(i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "A SOMA DOS IMPARES = " << soma << endl;

    return 0;
}
