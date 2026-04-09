#include<stdio.h>

// Functions definition
int expression(int a, int b, int c) {
	int S = c * c;
	int R = a + b;
	int D = (R + S)/2;
	
	return D;
}

void secondsToHours(int seconds) {
	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	int remainSeconds = (seconds % 3600) % 60;
	
	printf("Horas: %d:%d:%d\n", hours, minutes, remainSeconds);
}

void breakingDivision(float a, float b) {
	float quociente = a / b;
	int remaining = (int)a % (int)b;
	
	printf("Dividendo: %.2f\n", a);
	printf("Divisor: %.2f\n", b);
	printf("Quociente: %.2f\n", quociente);
	printf("Resto: %d\n", remaining);
}

void resolving(int a, int b) {
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	
	printf("Soma: %d\n", sum);
	printf("Subtracao: %d\n", sub);
	printf("Multiplicacao: %d\n", mul);
	printf("Divisao: %d\n", div);
}

// Main
int main() {
	//	1
//	int x;
//	int y;
//	
//	printf("#A: ");
//	scanf("%d", &x);
//	printf("#B: ");
//	scanf("%d", &y);
//	
//	resolving(x, y);
	
	//	2
//	float dividendo;
//	float divisor;
//	
//	printf("Entre o dividendo: ");
//	scanf("%f", &dividendo);
//	printf("Entre o divisor: ");
//	scanf("%f", &divisor);
//	
//	breakingDivision(dividendo, divisor);
	
	//	3
//	int a;
//	int b;
//	int c;
//	
//	
//	printf("Enter #A: ");
//	scanf("%d", &a);
//	printf("Enter #B: ");
//	scanf("%d", &b);
//	printf("Enter #C: ");
//	scanf("%d", &c);
//	
//	int value = expression(a, b, c);
//	printf("%d", value);
//	
//	return 0;

	// 4
//	secondsToHours(9045);
}
