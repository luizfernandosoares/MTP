#include <stdio.h>

struct fracao
{
	int numerador;
	int denominador;
};

struct fracao SOMA ( int num1, int den1, int num2, int den2 );

int main ()
{
	struct fracao ANSWER;
	int num1, num2, den1, den2;
	printf("Insira o numerador e o denominador da primeira fracao: ");
	scanf("%d/%d",&num1,&den1);
	printf("Insira o numerador e o denominador da segunda fracao: ");
	scanf("%d/%d",&num2,&den2);
	ANSWER = SOMA(num1, den1, num2, den2);
	printf("\nA soma dessas fracoes e': %d/%d", ANSWER.numerador, ANSWER.denominador);
	return 0;
}
struct fracao SOMA ( int num1, int den1, int num2, int den2 )
{
	struct fracao answer;
	int aux_den;
	if ( den1 == den2 )
	{
		answer.numerador = num1 + num2;
		answer.denominador = den1;
	}
	else
	{
		aux_den = den1 * den2;
		answer.numerador = (aux_den/den1)*num1 + (aux_den/den2)*num2;
		answer.denominador = aux_den;
	}
	return answer;
}
