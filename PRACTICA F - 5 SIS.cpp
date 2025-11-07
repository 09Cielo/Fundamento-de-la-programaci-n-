#include <iostream>
using namespace std;

void sistema(float A, float B, float C, float D, float E, float F) {
    float det = A*E - B*D;
    if (det == 0)
        cout << "No hay solución única." << endl;
    else {
        float x = (B*F - C*E) / det;
        float y = (C*D - A*F) / det;
        cout << "x = " << x << ", y = " << y << endl;
    }
}

int main() {
    float A, B, C, D, E, F;
    cout << "Ejercicio 5 - Sistema de ecuaciones" << endl;
    cout << "Ingrese A B C D E F: ";
    cin >> A >> B >> C >> D >> E >> F;
    sistema(A,B,C,D,E,F);
    return 0;
}
