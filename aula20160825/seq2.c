#include<stdio.h>

int main ()
{
	float b, h, area;
	printf("Insira o valor da base do triangulo: ");
	scanf("%f", &b);
	printf("\n\nInsira o valor da altura do triangulo: ");
	scanf("%f", &h);
	area = (b*h)/2;
	printf("\n\nO valor da area do triangulo e': %.2f\n", area);
	return 0;
}
