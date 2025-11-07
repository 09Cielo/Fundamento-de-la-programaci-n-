#include <iostream>
using namespace std;

int FAC (int n) {
    int c = 1;
    
    for (int i = 1; i <= n; i++){
        c = c * i; 
    }
        return c;
}

int main (){
    int n; 
    cout << "Ingrese un numero entero (positivo): ";
    cin >> n;
    
    int resultado = FAC(n);
    
    cout << "El factorial es: " << resultado << endl;
}