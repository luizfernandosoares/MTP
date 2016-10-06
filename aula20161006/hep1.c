#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void RecebeVetor (float * vetor, int qtde );
float Media ( float * vetor, int qtde );
float desviopadrao ( float * vetor, int qtde );
int main ()
{
	int qtde;
	float * vetor;
	printf("Entre com os elementos: ");
	scanf("%d", &qtde);
	vetor = (float *) calloc(qtde, sizeof(float));
	RecebeVetor(vetor, qtde);
	printf("\nMedia: %g\nDesvio padrao: %g\n\n", Media(vetor, qtde), sqrt(desviopadrao(vetor, qtde)) );
	free(vetor);
	return 0;
}
void RecebeVetor (float * vetor, int qtde )
{
	int i;
	for ( i=0; i < qtde; i++ )
	{
		printf("Entre como o elemento %d: ", i+1);
		scanf("%f", &vetor[i] );
	}
}
float Media ( float * vetor, int qtde )
{
	float media = 0;
	int i;
	for ( i=0; i< qtde; i++ )
		media += vetor[i];
	return media/qtde;
}
float desviopadrao ( float * vetor, int qtde )
{
	float soma = 0, m = Media (vetor, qtde);
	int i;
	for ( i=0; i<qtde; i++ )
		soma += pow( (vetor[i] - m), 2.f);
	return soma/(qtde-1);
}
