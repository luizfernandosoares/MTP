#include<stdio.h>
#include<stdlib.h>

void reverter( int vet[] )
{
	int i, j=9, aux;
	for ( i=0; i<=j; i++ )
	{
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
		j--;
	}
}
int main()
{
	int vet[10], i;
	for( i=0; i<10; i++ )
	{
		printf("Insira o vetor na posicao %d: ", i);
		scanf("%d", &vet[i] );
	}
	reverter(vet);
	printf("\n\nO vetor revertido e':\n");
	for( i=0; i<10; i++ )
	printf("%d ", vet[i]);
	return 0;
}
