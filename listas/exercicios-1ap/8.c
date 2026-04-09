/*

8. Faça um programa que leia o número total de eleitores de um estado, o número de
votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float eleitores;
    float brancos;
    float nulos;
    float validos;

    printf("Quantos eleitores tem no seu estado? ");
    scanf("%f", &eleitores);

    printf("Quantos votaram branco? ");
    scanf("%f", &brancos);
    printf("Quantos votaram nulo? ");
    scanf("%f", &nulos);
    printf("Quantos votaram validos? ");
    scanf("%f", &validos);

    float proporcao_brancos = (brancos / eleitores) * 100;
    float proporcao_nulos = (nulos / eleitores) * 100;
    float proporcao_validos = (validos / eleitores) * 100;

    printf("Proporcao de votos brancos: %.2f percento\n", proporcao_brancos);
    printf("Proporcao de votos nulos: %.2f percento\n", proporcao_nulos);
    printf("Proporcao de votos validos: %.2f percento\n", proporcao_validos);

    return 0;
}
