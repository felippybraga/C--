#include <iostream>

using namespace std;

int main()
{
    int qt, cont;

    cout << "qual a ordem da matriz? ";
    cin >> qt;

    int mat[qt][qt];

    for(int i = 0; i < qt; i++) {
        for(int j = 0; j < qt; j++) {
            cout << "ELEMENTO: [" << i << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRICIPAL:" << endl;
    for(int i = 0; i < qt; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    cont = 0;
    for(int i = 0; i < qt; i++) {
        for(int j = 0; j < qt; j++) {
            if(mat[i][j] < 0) {
                cont++;
            }
        }
    }

    cout << "QUANTIDADE DE NEGATIVOS = " << cont << endl;

    return 0;
}
