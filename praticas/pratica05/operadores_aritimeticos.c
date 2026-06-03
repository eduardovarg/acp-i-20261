#include <stdio.h>
int main(){

   int n1; 
   int n2 ;

   printf("entre o primeiro numero inteiro: ");
   scanf("%i", &n1);

   printf("entre com o segundo numero inteiro: ");
   scanf("%i", &n2);

   int soma = n1 + n2;
   int subtracao = n1 - n2;
   int multiplicacao = n1 * n2;
   float divisao = n1 / n2;
   

   printf("%i + %i = %i \n", n1, n2, soma);
   printf("%i - %i = %i \n", n1, n2, subtracao);
   printf("%i * %i = %i \n", n1, n2, multiplicacao);
   printf("%i / %i = %f \n", n1, n2, divisao);


    return 0;
}