/*

7. Um comerciante comprou um produto por um certo valor e deseja revendê-lo por
um valor que lhe proporcione um lucro de 37%. Faça um programa que receba o
valor pago pelo produto e imprima o valor de revenda.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int venda;
    int revenda;

    printf("Comprou por: ");
    scanf("%d", &venda);

    revenda = venda + ((venda * 37) / 100);

    printf("Revenda por: %d", revenda);

    return 0;
}