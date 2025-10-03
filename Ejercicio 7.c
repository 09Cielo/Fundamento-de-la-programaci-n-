#include <stdio.h>

int main() {
    int temporadas, capitulos;                              //entrada de numeros enteros
    double duracion , intro, total;                   //entrada de decimales //float hasta 17 decimales // double hasta 6 decimales

    printf("Introduzca el numero de temporadas: ");         //se pone "d" cuando es entero
    scanf("%d", &temporadas);

    printf("Introduzca el numero de temporadas: ");         //se pone "d" cuando es entero
    scanf("%d", &temporadas);                               //scanf es el que ingresa el dato que escribiste

    printf("Introduzca el numero de capitulos por temporada: ");
    scanf("%d", &capitulos);

    printf("Introduzca la duracion promedio de cada capitulo (en minutos): ");      //se pone "f" cuando es decimal
    scanf("%f", &duracion);

    printf("Introduzca la duracion de la introduccion de cada capitulo (en minutos): ");
    scanf("%f", &intro);

    total = (temporadas * capitulos * (duracion - intro)) / 60;         //formula

    printf("Has invertido un total de %.2f horas viendo tu serie favorita.\n", total); //se pone .\n para indicar salto de texto

    return 0;
}

