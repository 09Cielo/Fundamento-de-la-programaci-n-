#include <iostream>
using namespace std;

void romano(int n) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolos[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    cout << "En romano: ";
    for (int i = 0; i < 13; i++) {
        while (n >= valores[i]) {
            cout << simbolos[i];
            n -= valores[i];
        }
    }
    cout << endl;
}

int main() {
    int n;
   
    cout << "Ingrese un numero (1-3999): ";
    cin >> n;
    romano(n);
    return 0;
}
