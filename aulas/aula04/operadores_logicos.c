#include <stdio.h>

int main (){
    int idade;

    printf(" entre com usa idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n')
    
        ;

    printf("voce eh uma crianca? %i\n", idade >= 0 && idade <= 12);
    // && => 0 falso E qualquer coisa = Sempre Falso
    printf(" voce tem prioridade pra vacinar? %i\n", idade <= 6 || idade  >= 60);

    // "||" => ' verdadeiro ou qualquer coisa = sempre verdadeiro

    // ! => nao verdadeiro = falso, NAo falso = verdadeiro
    printf(" voce naum pode votar? %i\n", !(idade >= 16));




    printf("voce eh uma adolecente? %i\n", idade >= 12 && idade <= 16);
    printf("voce eh um jovem? %i\n", idade >= 16 && idade < 20);
    
    
    
    return 0;
}