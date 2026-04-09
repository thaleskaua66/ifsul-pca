/*

5. Sabendo que determinado veículo percorre 10 km por litro de combustível
consumido, elabore um programa que receba uma distância em quilômetros e
informe quantos litros de combustível o carro gastará pera percorrê-la

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int km;

    printf("Quantos km o carro vai correr? ");
    scanf("%d", &km);

    float litros = (float)km / 10;

    printf("O carro vai gastar %.2f litros de combustivel", litros);

    return 0;
}
