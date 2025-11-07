#include <iostream>
#include <cmath>
using namespace std;

void cuadratica(double a, double b, double c) {
    double d = b*b - 4*a*c; // discriminante

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        cout << "Raices reales: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (d == 0) {
        double x = -b / (2*a);
        cout << "Raiz doble: x = " << x << endl;
    }
    else {
        double real = -b / (2*a);
        double imag = sqrt(-d) / (2*a);
        cout << "Raices complejas: " << real << " ± " << imag << "i" << endl;
    }
}

int main() {
    double a, b, c;
    
    cout << "Ingrese a, b, c: ";
    cin >> a >> b >> c;

    cuadratica(a, b, c);
    return 0;
}
