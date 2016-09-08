#include<stdio.h>
#include<stdlib.h>

void somatorio ( int vet[] )
{
	int i, soma=0;
	for ( i=0; i<10; i++ );
	    soma = soma + vet[i];
	printf("\nSoma: %d", soma);
}
void produtorio ( int vet[] )
{
	int i, produto=1;
	for ( i=0; i<10; i++ )
	    produto = produto*vet[i];
	printf("\nProduto: %d\n", produto);
}
int main()
{
	int vet[10], i, soma, produto;
	for( i=0; i<10; i++ )
	{
		printf("Insira o vetor na posicao %d: ", i);
		scanf("%d", &vet[i] );
	}
	somatorio(vet);
	produtorio(vet);
	return 0;
}
