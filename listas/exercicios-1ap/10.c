/*

10. Normalmente mulheres grávidas contam o tempo de gestação em semanas.
Sabendo que uma semana tem sete dias e que o mês tem aproximadamente 30
dias, faça um programa que recebendo o número de semanas de gestação, calcule
e imprima o número de meses e dias de gestação. Ex: 5 semanas = 1 mês e 5
dias

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int semanas;
    int meses;
    int dias;

    printf("Semanas de gestacao: ");
    scanf("%d", &semanas);

    dias = semanas * 7;
    meses = dias / 30;
    dias = dias % 30;

    printf("Meses: %d\n", meses);
    printf("Dias: %d\n", dias);

    return 0;
}
