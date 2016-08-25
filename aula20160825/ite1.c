#include<stdio.h>

int main ()
{
	int num, fatorial=1, i;
	printf("Insira um numero: ");
	scanf("%d", &num);
	for ( i=1; i<(num+1) ; i++)
	{
		fatorial = fatorial*i;
	}
	printf("\n\nO fatorial de %d e': ", num);
	printf("%d", fatorial);
	return 0;
}
