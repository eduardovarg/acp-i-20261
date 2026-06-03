#include <stdio.h>
int main(){
    int inteiro01;
    int inteiro02;

    printf("entre com o primeiro numero inteiro: ");
    scanf("%i", &inteiro01);
    while (getchar() != '\n');

    printf("entre com o segundo numero inteiro: ");
    scanf("%i", &inteiro02);
    while(getchar() != '\n');
    

    int soma = inteiro01 + inteiro02;
    int subtracao = inteiro01 - inteiro02;
    int multiplicaçao = inteiro01 * inteiro02;
    float divisao = inteiro01 / inteiro02;
    int resto = inteiro01 % inteiro02;


    printf("%i + %i = %i\n", inteiro01,inteiro02,soma);
    printf("%i - %i = %i\n", inteiro01,inteiro02,subtracao);
    printf("%i * %i = %i\n", inteiro01,inteiro02,multiplicaçao);
    printf("%i / %i = %f\n", inteiro01,inteiro02,divisao);
    printf("%i %, %i = %i\n", inteiro01,inteiro02,resto);
    
    return 0;
}