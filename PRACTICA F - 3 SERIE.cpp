#include <iostream>
using namespace std;

float potencia(float x, int y) {   // Calcula x^y
    float r = 1;
    for (int i = 1; i <= y; i++)
        r *= x;
    return r;
}

int factorial(int n) {            // Calcula n!
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

float serie1(int x, int n) {      // Calcula la serie
    float s = 0;
    for (int i = 1; i <= n; i++)
        s += potencia(x, i) / factorial(i);
    return s;
}

int main() {
    int x, n;
    
    cout << "Ingrese X: "; 
    cin >> x;
    
    cout << "Ingrese N: "; cin >> n;
    cout << "Resultado de la serie: " << serie1(x, n) << endl;
    return 0;
}
