#include <iostream>
#include <cmath>
using namespace std;

int POTEN (int base, int exponente){
    int resultado = 1;
    
    for (int i = 1 ; i <= exponente ; i++){
        resultado = resultado * base;
    }

return resultado;
    
}

int main (){
    int base, exponente, resultado; 
    
    cout << "Ingrese la base: ";
    cin >> base;
    
    cout << "Ingrese el exponente entero (positivo): ";
    cin >> exponente ;
    
    resultado = POTEN(base, exponente);
    
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;
    
    return 0;
}
