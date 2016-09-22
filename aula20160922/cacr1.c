#include <stdio.h>
int primo ( int numero );
int main ()
{
	int i, numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	for ( i=1; i<= numero/2; i++)
		if ( primo(i) && primo(numero-1) )
			printf("%d + %d\n", i, numero-1);
	return 0;
}
int primo ( int numero )
{
	int i, checa = 1;
	for ( i=2; i<= numero/2; i++ )
		if ( numero%i == 0 )
		{
			checa = 0;
			break;
		}
	return (numero<=1)? 0 : checa;	
}
