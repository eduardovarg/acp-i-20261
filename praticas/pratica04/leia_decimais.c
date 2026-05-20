#include <stdio.h>
int main(){

    double nota1;
    
    
    printf("coloque a primeira nota do aluno: ");
    scanf("%d", &nota1);
    while(getchar() != '\n');

    printf(" nota 1 do aluno: %d\n", nota1);

    double nota2;

    printf("coloque a segunda nota do aluno:  ");
    scanf("%d", &nota2);
    while(getchar() != '\n');
    

    printf("nota 2 do aluno: %d \n", nota2);

    


    
    
    


    return 0;
}