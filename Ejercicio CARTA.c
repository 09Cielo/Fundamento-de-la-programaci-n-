#include <stdio.h>
int main (){
int P;

printf("Ingrese el peso de la carta: ");
scanf("%d", &P);

if(P > 0 && P < 50){
    printf ("El precio del envio es 1.50 Bs.");
}
if(P > 50 && P <=100){
        printf("El precio del envio es 4 Bs.");
}
if(P > 100 && P <=200){
        printf("El precio del envio es 6 Bs.");
}
if(P > 200 && P <=350){
        printf("El precio del envio es 10.50 Bs.");
}
if(P > 350 && P <=500){
        printf("El precio del envio es 15 Bs.");
}
if(P > 500){
        printf("NO SE PUEDE MANDAR COMO CARTA");

}


return 0;
}
