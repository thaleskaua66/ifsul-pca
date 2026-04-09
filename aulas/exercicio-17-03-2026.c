#include<stdio.h>

int main(){
//	Negócio nada a ver
//	int integer;
//	float real_number;
//	char character;
//	
//	printf("Insira um número inteiro: ");
//	scanf("%d", &integer);
//	printf("\nVocê escolheu: %d\nInsira um número float: ", integer);
//	scanf("%f", &real_number);
//	printf("\nVocê escolheu: %f\nInsira um caracter: ", real_number);
//	scanf("%c", &character);
	
	//	Real exercício
	int matricula;
	char conceito;
	
	printf("Que conceito gostaria de atribuir (A, B, C, D, E)? ");
	scanf("%c", &conceito);
	printf("Voce deseja atribuir o conceito %c a qual matricula? ", conceito);
	scanf("%d", &matricula);
	
	printf("O aluno da matricula %d recebeu o conceito %c", matricula, conceito);
	
	
	return 0;
}
