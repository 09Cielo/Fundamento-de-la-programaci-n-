#include <iostream>
#include <iomanip>
using namespace std;

double calculartotal (double precio, int cantidad){
double total = precio * cantidad;
return total;
}

int main (){
double precio;
int cantidad;
double total;

cout << "Ingrese el precio unitario: ";
cin >> precio;
cout << "Ingrese la cantidad vendida: ";
cin >> cantidad;

total = calculartotal (precio, cantidad);

cout << fixed << setprecision (2);
cout << "El total de la venta es: " << total << endl;

return 0;
}
