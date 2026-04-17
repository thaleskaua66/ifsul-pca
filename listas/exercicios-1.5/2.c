/*

2. Elabore um algoritmo que lê dois valores inteiros e mostra o produto dos valores.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Insira X: ");
    scanf("%d", &x);
    printf("Insira Y: ");
    scanf("%d", &y);

    printf("Produto: %d", x * y);

    return 0;
}
