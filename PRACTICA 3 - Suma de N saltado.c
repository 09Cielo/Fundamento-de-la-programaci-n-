#include <stdio.h>

int main() {
    int N, i, S = 0;

    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            S -= i;
        } else {
            S += i;
        }
    }

    printf("La suma es: %d\n", S);

    return 0;
}
