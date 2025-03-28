#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cout << "digite dois numeros:" << endl;
    cin >> n1;
    cin >> n2;

    while(n1 != n2) {
         if (n1 < n2) {
            cout << "CRESCENTE\n";
        } else {
            cout << "DECRESCENTE\n";
        }

        cout << "digite outros dois numeros:" << endl;
        cin >> n1;
        cin >> n2;
    }



    return 0;
}
