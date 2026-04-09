/*

3. Faça um programa que receba 3 números reais e imprima o resultado da média
aritmética.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int num3;

    printf("Numero #1: ");
    scanf("%d", &num1);
    printf("Numero #2: ");
    scanf("%d", &num2);
    printf("Numero #3: ");
    scanf("%d", &num3);

    const int media = (num1 + num2 + num3) / 3;

    printf("Media artimetica: %d", media);
    
    return 0;
}
