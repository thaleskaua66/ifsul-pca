/*

12. Um personal trainer de uma academia necessita calcular o IMC (Índice de Massa
Corporal) dos seus alunos. Crie um programa que recebendo o peso e a altura de
um aluno calcule e imprima o resultado do IMC, sabendo que IMC = peso/altura².

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int peso;
    float altura;

    printf("Seu peso (kg): ");
    scanf("%d", &peso);
    printf("Sua altura (cm): ");
    scanf("%f", &altura);

    float imc = peso / ((altura / 100) * (altura / 100));

    printf("Seu imc e de %.2f", imc);

    return 0;
}
