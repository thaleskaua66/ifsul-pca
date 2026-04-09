/*

2. Escreva um programa para ler um valor (do teclado) e escrever (na tela) o seu
antecessor e seu sucessor

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("Antecessor: %d\n", valor - 1);
    printf("Sucessor: %d\n", valor + 1);


    return 0;
}
