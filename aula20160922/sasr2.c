#include <stdio.h>
void par ( int op );
void impar ( int op );

void main ()
{
	int opcao;
	printf("Tecle 1 para pares e 2 para impares: ");
	scanf("%d", &opcao);
	if ( opcao == 1 )
		par(opcao);
	if ( opcao == 2 )
		impar(opcao);
	return 0;		 
}

void par ( int op )
{
	int i;
	for ( i = 1; i<=10; i++ )
		if ( i%2 == 0 )
			printf("%d ", i);
	printf("\n\n");		
}
void impar ( int op )
{
	int i;
	for ( i = 1; i<=10; i++ )
		if ( i%2 != 0 )
			printf("%d ", i);
	printf("\n\n");		
}
