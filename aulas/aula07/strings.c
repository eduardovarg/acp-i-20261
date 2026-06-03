#include <stdio.h>
#include <string.h>

int main(){
    char *string; // ponteiro para char
    char texto [10]; // sabor string
    // tamanhho da string = qdte de char +1 de \0

    texto[0] ='o';
    texto[1] ='l';
    texto[2] ='a';
    texto[3] =' ';
    texto[4] ='p';
    texto[5] ='e';
    texto[6] ='s';
    texto[7] ='s';
    texto[8] ='o';
    texto[9] ='a';
    texto[10] ='\0'; // necessita sempre
    
    printf("%s\n",texto);
    texto[3] = '\0';

    printf("%s\n", texto);

    for(int i = 0; i < 11; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    // naum pode
    //texto = "ola";
    // texto = texto + "pessoal"

    // copia string
    strcpy(texto, "bom"); // como atribuir uma string
    printf("%s\n", texto);

    //concatena string
    strcat(texto, " dia");
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("o tamanho do texto e %i\n", tamanho);
    int capacidade = sizeof(texto);
    printf("A capacidade do texto e %i\n", capacidade);

    //preencher com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto);

    // limpa string
    memset(texto, '\0' , capacidade);
    
    int compara = strcmp("banana", "laranja");
    printf("banana == laranja? %i\n", compara);
    // -1 banana vem antes da laranaja na ordem alfabetica
    compara = strcmp("larnaja", "banana");
    printf("laranja == banana? %i\n", compara);
    // 1 laranja e depois da banana na ordem alfabetica
    compara = strcmp("banana", "banana");
    printf("banana == banana? %i\n", compara);
    // 0 sao iguas
    compara = strcmp("banana", "BANANA");
    printf("banana == BANANA? %i\n", compara);
    // 1 MAIUSCULOS e antes de minusculos

    char *tem_letra_a =strchr("sergipe", 'a');
    printf("a palavra sergipe tem a letra a? %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf("a palavra roraima tem letra a? %s\n", tem_letra_a);

    char *tem_silva = strstr("Joao da silva", "silva");
    printf("o nome joao da silva tem SILVA? %s\n", tem_silva);
    
    tem_silva = strstr("Joao da silva", "silva");
    printf("o nome joao da silva tem SILVA? %s\n", tem_silva);


    return 0;
}