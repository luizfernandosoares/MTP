#include <stdio.h>

int divisao ( int dividendo, int divisor, int *quociente, int *resto );
int main ()
{
	int dividendo, divisor, quociente, resto;
	printf("Digite o dividendo: ");
	scanf("%d", &dividendo);
	printf("Digite o divisor: ");
	scanf("%d", &divisor);
	if ( divisao(dividendo, divisor, &quociente, &resto) )
		printf("\nO quociente e': %d\nO resto e': %d\n\n", quociente, resto);
	else
		printf("\nNao e' possivel, pois o divisor vale zero!\n");
	return 0;
}
int divisao ( int dividendo, int divisor, int *quociente, int *resto )
{
	if ( divisor != 0 )
	{
		*quociente = dividendo/divisor;
		*resto = dividendo%divisor;
		return 1;
	}
	else
		return 0;
}
