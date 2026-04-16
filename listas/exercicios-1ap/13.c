/*

13. Desenvolva um programa que leia o salário de um funcionário e a porcentagem de
aumento que o funcionário receberá. Depois calcule o novo salário e exiba-o

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float salario, aumento;

    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Insira a porcentagem de aumento que ele recebera: ");
    scanf("%f", &aumento);

    float total = salario + (salario * aumento) / 100;

    printf("Salario com aumento: R$%.2f", total);

    return 0;
}
