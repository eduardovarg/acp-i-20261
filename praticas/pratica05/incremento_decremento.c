#include <stdio.h>
int main(){
   int numero = 0;

   printf("coloque um numero inteiro: ");
   scanf("%i", &numero);

   int pre_incremento = numero;
   int pos_incremento = numero;
   int pre_decremento = numero;
   int pos_decremento = numero;

   printf("o pre incremento de %i e %i\n", numero,++pre_incremento);
   printf("o pos incremento de %i e %i=>", numero,pos_incremento++);
   printf("%i\n",pos_incremento);
   printf("o pre decremento de %i e %i\n", numero,--pre_decremento);
   printf("o pos decremento de %i e %i=>", numero,pos_decremento--);
   printf("%i\n",pos_decremento);

   




    return 0;
}