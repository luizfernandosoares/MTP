#include<stdio.h>

int main()
{
	int i;
	float num, inversao1, soma1=0;
	double inversao2, soma2=0;
	printf("Digite um numero inteiro: ");
	scanf("%f", &num);
	inversao1 = 1.0/num;
	inversao2 = 1.0/num;
	for ( i=1; i<=729; i++)
	{
		soma1 = soma1 + inversao1;
		soma2 = soma2 + inversao2;
	}
	printf("\n%.15g", soma1);
	printf("\n%.15g", soma2);
	return 0;
}
