#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	srand(time(0));
	int num, soma;
	printf("Insira um numero nao negativo: ");
	scanf("%d", &num);
	if ( num >= 0 )
	{
		soma = num + rand()%2;
		if ( soma%2 == 0 )
			printf("\n\nO numero e' par!\n");
		else
		    printf("\n\nO numero e' impar!\n");
	}
	else 
	{
		printf("\nValor nao permitido!");
		return 0;
	}
	return 0;
}
