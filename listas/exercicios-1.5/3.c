/*

3. Elabore um algoritmo que lê dois valores reais e mostra a soma e o produto dos
valores

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float x, y;

    printf("Valor de X: ");
    scanf("%f", &x);
    printf("Valor de Y: ");
    scanf("%f", &y);

    float soma = x + y;
    float produto = x * y;

    printf("Soma: %.2f\nProduto: %.2f", soma, produto);

    return 0;
}
