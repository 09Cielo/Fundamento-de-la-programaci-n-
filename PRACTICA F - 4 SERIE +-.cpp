#include <iostream>
using namespace std;

float potencia(float x, int y) {
    float r = 1;
    for (int i = 1; i <= y; i++)
        r *= x;
    return r;
}

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

float serie2(int x, int n) {
    float s = 0;
    int signo = 1;   // alterna + y -
    for (int i = 1; i <= n; i += 2) {
        s += signo * (potencia(x, i) / factorial(i));
        signo = -signo;
    }
    return s;
}

int main() {
    int x, n;
    
    cout << "Ingrese X: "; cin >> x;
    cout << "Ingrese N: "; cin >> n;
    cout << "Resultado de la serie: " << serie2(x, n) << endl;
    return 0;
}
