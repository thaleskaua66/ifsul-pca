/*

11. Um grupo de cinco amigos pretende dar um churrasco, para isso eles necessitam
alugar um lugar, comprar as carnes, comprar as bebidas e pagar pela limpeza do
lugar após a festa. Faça um programa que recebendo o valor do aluguel do lugar,
das carnes, das bebidas e da limpeza, calcule e imprima na tela quanto cada um
do grupo deve pagar para o churrasco, sabendo que todos pagarão valores iguais.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int integrantes = 5;
    float aluguel;
    float carnes;
    float bebidas;
    float limpeza;

    printf("Valor do aluguel: ");
    scanf("%f", &aluguel);
    printf("Valor das carnes: ");
    scanf("%f", &carnes);
    printf("Valor das bebidas: ");
    scanf("%f", &bebidas);
    printf("Valor da limpeza: ");
    scanf("%f", &limpeza);

    float valor_pago = (aluguel + carnes + bebidas + limpeza) / integrantes;

    printf("Cada um deve pagar R$%.2f", valor_pago);

    return 0;
}
