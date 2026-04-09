/* 

9. O custo final de um carro novo é a soma do custo de fábrica com a percentagem
do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a
percentagem do distribuidor seja de 23% e os impostos de 39%. Escreva um
programa que leia o custo de fábrica de um carro e escreva o custo final

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float custo_fabrica;
    float percento_distribuidor = 23;
    float impostos = 39;
    float total = 0;

    printf("Custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    total += ((custo_fabrica * percento_distribuidor) / 100);
    total += ((custo_fabrica * impostos) / 100);
    total += custo_fabrica;

    printf("Total: %.2f", total);

    return 0;
}
