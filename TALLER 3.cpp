#include <iostream>
#include <algorithm> //esta libreria se coloca para poder usar el reverse
#include <string>   //esta libreria se usa para poder usar las funciones de string
using namespace std;

int main(){
    string texto, textor;       //declaramos ambas variables que vamos a usar

    cout<<"Ingrese un texto: ";
    getline (cin, texto);       //guarda el texto que acabamos de colocar en la variable texto, el getline nos ayuda a que lea tambien los espacios

    textor = texto;     //guarda el texto para poder volcarlo

    reverse(textor.begin (), textor.end());  //aca vuelca el texto que acabamos de guardar

    cout<<"Texto invertido: "<<textor;

    if (texto == textor){       //El texto en reversa se compara con el original

        cout<<endl<< "El texto si es capicua"; //si cumple, entonces salta el mensaje
    }

    else{
        cout<<endl<<"El texto no es capicua"; //si no cumple, de igual forma, salta el texto

    }

    return 0;
}
