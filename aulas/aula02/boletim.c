#include <stdio.h>

int main(){
 /*
      ===================================
        
            Boletim De Notas

       ===================================
       "Disciplinas     A1    A2   A3   MF
       "apc            5.9   6.2  4.8  6.6
       "matema dicre   4.6   6.3  6;5
       "calculo        4.5   5.9  6.7
 */
         char tecla_pressionada = 'A';
         int inteiro =10;
         float dicimal = 5.2f; // ate 6 cassa decimais
         double duplo = 5.2; // ate 12 casas decimais

       printf("===================================\n");
        
       printf("          Boletim De Notas\n");

       printf("===================================\n");
       printf("Disciplinas     A1    A2   A3   MF  \n");

       int codigo_disciplina;
       float nota_a1;
       float nota_a2;
       float nota_a3;
       float media_final;
    
       codigo_disciplina = 998;
       nota_a1 = 5.9f;
       nota_a2 = 6.3f;
       nota_a3 = 4.8f;
       media_final = 6.6f;


       printf("%05i %5.1f  %5.1f    %5.1f   %5.1f\n", codigo_disciplina,
             nota_a1, nota_a2, nota_a3, media_final);
        
        codigo_disciplina = 118;    
        nota_a1 = 5.9f;
        nota_a2 = 6.3f;
        nota_a3 = 4.8f;
        media_final = 6.6f;

       printf("%05i %5.1f  %5.1f    %5.1f   %5.1f\n", codigo_disciplina,
           nota_a1, nota_a2, nota_a3, media_final);

        codigo_disciplina =  91;
        nota_a1 =  4.6;
        nota_a2  = 6.3;
        nota_a3  = 6.5;
        media_final =  5.5;

       printf("%05i %5.1f  %5.1f    %5.1f   %5.1f\n", codigo_disciplina,
           nota_a1, nota_a2, nota_a3, media_final);

        codigo_disciplina = 257;
        nota_a1 =  4.5;
        nota_a2  = 4.4;
        nota_a3  =  6.7;
        media_final =  5.7; 

        printf("%05i %5.1f  %5.1f    %5.1f   %5.1f\n", codigo_disciplina,
           nota_a1, nota_a2, nota_a3, media_final);
       
       return 0;
 }