#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int TAMANHO = 0; 
struct Operacoes {
	float Media;
	float Maior;
	float Menor;
}Operacoes;
struct Operacoes OP ( float *vet);
float * recebeNumero ( float * vet);
int main () {
	float * vetor = NULL;
	struct Operacoes operacoes;
	int op;
	do {
		system("cls");
		vetor = recebeNumero(vetor);
		operacoes = OP(vetor);
		printf("Media = %g\nMaior = %g\nMenor = %g\n", Operacoes.Media, Operacoes.Maior, Operacoes.Menor);
		printf("\nDeseja digitar outro numero? **tecle 1 para sim e 0 para nao**\n");
		scanf("%d", &op);
	}while ( op != 0 );
	free(vetor);
	return 0;
}
float * recebeNumero ( float * vetor) {
	TAMANHO++;
	printf("Digite um numero: ");
	if ( vetor == NULL )
		vetor = (float *) malloc( sizeof(float) );
	else
		vetor = (float *) realloc(vetor, TAMANHO*sizeof(float) );
	scanf("%f", &vetor[TAMANHO-1] );
	return vetor;
}
struct Operacoes OP ( float *vet ){
	struct Operacoes OP;
	int i;
	float maior = vet[0], menor = vet[0];
	Operacoes.Media = 0;
	for ( i=0; i < TAMANHO; i++ ) {
		Operacoes.Media = Operacoes.Media + vet[i];
		if ( vet[i] > maior )
			maior = vet[i];
		if ( vet[i] < menor )
			menor = vet[i];	
	}
	Operacoes.Media = Operacoes.Media/TAMANHO;
	Operacoes.Maior = maior;
	Operacoes.Menor = menor;
	return OP;
}
