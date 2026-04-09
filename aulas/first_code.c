#include<stdio.h>

int main(int argc, char** argv){
	
	int inteiro = 90;
	char caracter = 'k';
	char name[] = "Kauã Thalison";
	float num_pontof = 90.8045578f;
	double num_pontoF = 3.14159236743076f;
	
	printf("%.7f", num_pontof);
	printf("\n");
	printf("%.15lf", num_pontoF);
	
	return 0;
}

