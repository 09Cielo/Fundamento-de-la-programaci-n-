#include <iostream>
using namespace std;

void literal(int dia, int mes, int anio) {
    string meses[] = {"", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                      "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    cout << dia << " de " << meses[mes] << " de 19" << anio << endl;
}

int main() {
    int d, m, a;
    
    cout << "Ingrese dia, mes y año (por ejemplo 20 5 99): ";
    cin >> d >> m >> a;

    literal(d, m, a);
    return 0;
}
