/*

4. Escreva um programa que leia um valor e armazene em uma variável A e leia outro
valor e armazene em uma variável B. A seguir (utilizando apenas atribuições entre
variáveis) troque os seus conteúdos fazendo com que o valor que está em A passe
para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas
variáveis

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a; // = c
    int b; // = a
    int c; // b isolado

    printf("#A: ");
    scanf("%d", &a);
    printf("#B: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("\n#A: %d\n#B: %d", a, b);

    return 0;
}
