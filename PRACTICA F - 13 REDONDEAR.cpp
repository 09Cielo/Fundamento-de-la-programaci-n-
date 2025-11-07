#include <iostream>
#include <cmath>
using namespace std;

double redondear(double num, int n) {
    double factor = pow(10, n);
    return round(num * factor) / factor;
}

int main() {
    double num;
    int n;
    cout << "Ejercicio 13 - Redondear numero" << endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Cantidad de decimales: ";
    cin >> n;
    cout << "Numero redondeado: " << redondear(num, n) << endl;
    return 0;
}
