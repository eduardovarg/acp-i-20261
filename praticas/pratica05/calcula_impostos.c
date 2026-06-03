#include <stdio.h>
int main(){

    float ICMS = 0.17;
    float ISS = 0.05;
    float PIS = 0.0165;

    float valor_produto;
    float valorICMS, valorISS, valorPIS, precoFinal;

    printf("Digite o valor do produto: ");
    scanf(" %f ", &valor_produto);

    valorICMS = valor_produto * ICMS;
    valorISS = valor_produto * ISS;
    valorPIS = valor_produto * PIS;

    precoFinal = (1 + ICMS + ISS + PIS) * valor_produto;

    printf("Valor do produto: R$ %.2f\n", valor_produto);
    printf("ICMS (17%%): R$ %.2f\n", valorICMS);
    printf("ISS (5%%): R$ %.2f\n", valorISS);
    printf("PIS (1,65%%): R$ %.2f\n", valorPIS);
    printf("Preco final: R$ %.2f\n", precoFinal);



    return 0;
}