#include <stdio.h>

int main() {
    int N, i, S = 0;

    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        S += i * i;
    }

    printf("La suma de los cuadrados es: %d\n", S);

    return 0;
}
