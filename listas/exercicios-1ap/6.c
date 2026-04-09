/*

6. Desenvolva um programa que receba a distância percorrida por um veículo e o
tempo gasto para percorrê-la. Após isso, calcule a velocidade média de um veículo,
sabendo que v= d/t, e imprima o resultado na tela.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int distancia;
    int tempo;

    printf("Insira a distancia em metros: ");
    scanf("%d", &distancia);
    printf("Insira o tempo em segundos: ");
    scanf("%d", &tempo);

    int vel = distancia / tempo;

    printf("Velocidade media: %dm/s", vel);

    return 0;
}
