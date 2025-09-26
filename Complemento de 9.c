#include <stdio.h>
int main (){
    int a, digito, resultado = 0, complemento, multiplicador = 1, resto, invertido;
    printf ("Ingrese un numero: ");
    scanf ("%d", &a);

    while (a > 0){

    digito = a % 10;
    complemento = 9 - digito;
    resultado = resultado * 10 + complemento;

  multiplicador = multiplicador * 10;
   a = a / 10;

    }
    while (resultado > 0){
    resto = resultado % 10;
    invertido = invertido * 10 + resto;
    resultado = resultado / 10;
    }

    printf("Complemento a 9: %d\n", invertido);



return 0;
}
