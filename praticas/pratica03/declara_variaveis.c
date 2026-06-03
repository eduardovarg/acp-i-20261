#include <stdio.h>

int main(){ 

    char informe_o_seu_sexo;
    printf("informe o seu sexo :");
    scanf("%c", &informe_o_seu_sexo);
    while(getchar() != '\n');

    printf("o seu sexo e:%c\n", informe_o_seu_sexo);

    int sua_altura;
    printf("coloque sua altura:");
    scanf("%i", &sua_altura);
    while(getchar() != '\n');

    printf("A sua altura e:%i\n", sua_altura);




    return 0;
}