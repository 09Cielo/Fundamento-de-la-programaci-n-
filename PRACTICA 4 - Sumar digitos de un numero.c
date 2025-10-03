#include <stdio.h>

int main() {
    int numero, suma = 0, digito;

    printf("Introduce un numero entero: ");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10;
        suma = suma + digito;
        numero = numero / 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}
