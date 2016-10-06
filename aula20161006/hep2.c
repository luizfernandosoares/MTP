#include<stdio.h>
#include<stdlib.h>
void imprime ( float **Mat, int n, int m );
void transposta ( float **Mat, int n, int m);
int main ()
{
	int M, N, i, j;
	float **matriz;
	printf("Insira o numero de linhas e colunas (NxM): ");
	scanf("%dx%d", &N, &M);
	matriz = (float**) calloc( N,sizeof(float*) );
	for (i = 0; i < N; i++ )
		matriz[i] = (float *) calloc(M,sizeof(float));
	for (i = 0; i < N; i++ )
		for ( j=0; j<M; j++ )
		{
			printf("Elemento (%d x %d): ", i+1, j+1 );
			scanf("%f", &matriz[i][j] );
		}
	printf("\nSua matriz digitada e': \n\n");
	imprime(matriz, N, M);
	printf("\nE a sua transposta e': \n\n");
	transposta(matriz, N, M);
	for ( i=0; i<N; i++)
		free(matriz[i]);
	free(matriz);
	return 0;
}
void imprime ( float **Mat, int n, int m )
{
	int i, j;
	for ( i=0; i < n; i++ )
	{
		printf("\n");
		for ( j=0; j < m; i++ )
			printf("%f ", Mat[i][j] );
	}
}
void transposta ( float **Mat, int n, int m)
{
	int i, j;
	float aux[m][n];
	for ( i=0; i < n; i++ )
		for ( j=0; j < m; i++ )
			aux[j][i] = Mat[i][j];
	for ( j=0; i < m; i++ )
	{
		printf("\n");
		for ( i=0; j < n; i++ )
			printf("%g ", aux[j][i] );
	}
}
