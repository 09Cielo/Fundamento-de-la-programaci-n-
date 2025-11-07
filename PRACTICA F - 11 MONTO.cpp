#include <iostream>
#include <cmath>
using namespace std;

void literalBs(double monto) {
    int entero = (int)monto;
    int centavos = round((monto - entero) * 100);
    cout << "Bs " << monto << " = " << entero << "  " << centavos << "/100 bolivianos" << endl;
}

int main() {
    double monto;
    cout << "Ejercicio 11 - Literal de monto" << endl;
    cout << "Ingrese un monto (ej: 1560.50): ";
    cin >> monto;
    literalBs(monto);
    return 0;
}
