#include<stdio.h>
#include<stdlib.h>

int somatorio ( int *vet, int n, int i, int j );
int main ()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int N = sizeof(A)/sizeof(int), soma, i=0, j=1;
	soma = somatorio(A, N, i, j);
	printf("%d\n\n", soma);
	return 0;
}
int somatorio ( int *vet, int n, int i, int j )
{
	int soma=0;
	return (j>n)? soma : ( soma = vet[i] + vet[j] + somatorio(vet, n, i+2, j+2) );
}
