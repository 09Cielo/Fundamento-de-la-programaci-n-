#include <stdio.h>

int main() {
    int n;
    int suma;

    printf("Ingrese N: ");
    scanf("%d", &n);


    suma = n * (n + 1) / 2;

    printf("La suma de los %d numeros es: %d\n", n, suma);

    return 0;
}
