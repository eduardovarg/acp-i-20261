#include <stdio.h>
int main(){

   int numero;
  
  
   printf("forneca um numero pra decompor de 4 digitos: ");
   scanf("%i",&numero);


   int milhar = numero/1000;
   int centena =(numero%1000)/100;
   int dezena =(numero%100)/10;
   int unidade = numero%10;

   printf("Milhar: %i\n", milhar);
   printf("centena: %i\n", centena);
   printf("dezena: %i\n", dezena);
   printf("unidade: %i \n", unidade);


    return 0;
}