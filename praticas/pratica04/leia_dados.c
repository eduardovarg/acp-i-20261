#include <stdio.h>
int main(){

    char seu_genero;
    float altura;
    int   peso;

    printf("informe teu genero M ou F: ");
    scanf("%c", &seu_genero);
    while(getchar() != '\n');

    printf("informe a sua altura: ");
    scanf("%f", &altura);
    while(getchar() != '\n');

    printf("coloque teu peso aproximado:  ");
    scanf("%i", &peso);
    while(getchar() != '\n');

    printf("seus dados\n");
    printf("genero:%c \n", seu_genero);
    printf("altura:%f \n", altura);
    printf("peso:%i \n", peso);
    
    return 0;
}