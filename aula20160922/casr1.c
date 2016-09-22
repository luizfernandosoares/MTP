#include <stdio.h>
#include <time.h>

void parabens ( int teste );
void main ()
{
	srand(time(0));
	int numero;
	printf("Insira um numero inteiro entre 0 e 10: ");
	scanf("%d", &numero);
	parabens (numero);
	return 0;
}
void parabens ( int teste )
{
	int aleatorio = 1 + rand()%10;
	if ( aleatorio == teste ) printf("\nParabens!\n");
}
