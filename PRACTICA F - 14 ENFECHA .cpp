#include <iostream>
#include <cmath>
using namespace std;

bool esBisiesto(int a) {
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
}

int diasDesdeInicio(int d, int m, int a) {
    int diasMes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (esBisiesto(a)) diasMes[2] = 29;
    int total = d;
    for (int i = 1; i < m; i++) total += diasMes[i];
    total += (a * 365);
    return total;
}

int diferenciaFechas(int d1, int m1, int a1, int d2, int m2, int a2) {
    return abs(diasDesdeInicio(d2,m2,a2) - diasDesdeInicio(d1,m1,a1));
}

int main() {
    int d1,m1,a1,d2,m2,a2;
    cout << "Ejercicio 14 - Dias entre dos fechas" << endl;
    cout << "Primera fecha (d m a): ";
    cin >> d1 >> m1 >> a1;
    cout << "Segunda fecha (d m a): ";
    cin >> d2 >> m2 >> a2;
    cout << "Dias transcurridos: " << diferenciaFechas(d1,m1,a1,d2,m2,a2) << endl;
    return 0;
}
