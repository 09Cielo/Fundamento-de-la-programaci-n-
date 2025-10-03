#include <stdio.h>

int main() {
   double bolivianos;
   double dolares;

   printf("Introduzca cantidad de dolares");
   scanf("%lf",&dolares);

   bolivianos=dolares*6,96;
   printf("%.2lf dolares son %.2lf bolivianos.\n", dolares, bolivianos);

   return 0;
}
