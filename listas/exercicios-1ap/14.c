/*

14. Um professor necessita calcular as notas finais dos alunos. Sabe-se que ele
aplicou duas provas e dois trabalhos. Cada prova tem peso três na nota final e
cada trabalho tem peso dois na nota final. Faça um programa que recebendo as
notas do aluno calcule a nota final e imprima na tela o resultado

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float notas_trabalhos[2];
    float notas_provas[2];

    printf("Insira sua nota no trabalho #1: ");
    scanf("%f", &notas_trabalhos[0]);
    printf("Insira sua nota no trabalho #2: ");
    scanf("%f", &notas_trabalhos[1]);

    printf("Insira sua nota na prova #1: ");
    scanf("%f", &notas_provas[0]);
    printf("Insira sua nota na prova #2: ");
    scanf("%f", &notas_provas[1]);

    float final = ((notas_trabalhos[0] * 2) + (notas_trabalhos[1] * 2) + (notas_provas[0] * 3) + (notas_provas[1] * 3)) / 10;

    printf("Nota final: %.2f", final);

    return 0;
}
