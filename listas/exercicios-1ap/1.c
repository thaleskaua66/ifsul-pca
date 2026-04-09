/*

1. Faça um programa que leia dois números e imprima:
a) o resultado da soma deles;
b) o resultado da subtração deles;
c) o resultado da multiplicação deles; e
d) o resultado da divisão deles.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Numero #1: ");
    scanf("%d", &num1);
    printf("Numero #2: ");
    scanf("%d", &num2);

    const int sum = num1 + num2;
    const int sub = num1 - num2;
    const int mul = num1 * num2;
    const int div = num1 / num2;

    printf("Soma: %d\n", sum);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mul);
    printf("Divisao: %d\n", div);

    return 0;
}
