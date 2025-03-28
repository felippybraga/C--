#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, menor;

    cout << "primeiro valor: ";
    cin >> n1;

    cout << "segundo valor: ";
    cin >> n2;

    cout << "terciro valor: ";
    cin >> n3;

    if(n1 < n2 && n1 < n3) {
        menor = n1;
    } else if(n2 < n3) {
        menor = n2;
    } else {
        menor = n3;
    }

    cout << "MANOR = " << menor;


    return 0;
}
