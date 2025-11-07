#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool fechaValida(int d, int m, int a) {
    if (m < 1 || m > 12) return false;
    int diasMes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (esBisiesto(a)) diasMes[2] = 29;
    return d >= 1 && d <= diasMes[m];
}

int main() {
    int d, m, a;
    cout << "Ejercicio 12 - Validar fecha" << endl;
    cout << "Ingrese dia, mes, anio: ";
    cin >> d >> m >> a;
    if (fechaValida(d,m,a))
        cout << "La fecha es valida." << endl;
    else
        cout << "Fecha invalida." << endl;
    return 0;
}
