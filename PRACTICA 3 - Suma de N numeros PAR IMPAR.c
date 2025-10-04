#include <stdio.h>

int main() {
    int N, suma = 0, i;

    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        N--;
    }

    for (i = 1; i <= N; i += 2) {
        suma += i;
    }

    printf("La suma de los n numeros impares hasta %d es: %d\n", N, suma);

    return 0;
}
