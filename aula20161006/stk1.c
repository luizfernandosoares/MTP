#include<stdio.h>
#include<stdlib.h>

void imprime ( int mat[1][3] );
void transposta ( int mat[1][3] );
int main ()
{
	int matriz[1][3] ;
	scanf("%d,%d,%d,%d", &matriz[0][0], &matriz[0][1], &matriz[0][2], &matriz[0][3]);
	scanf("%d,%d,%d,%d", &matriz[1][0], &matriz[1][1], &matriz[1][2], &matriz[1][3]);
	printf("\nSua matriz digitada e': \n");
	imprime(matriz);
	printf("\n\nSua transposta e': \n");
	transposta(matriz);
	return 0;
}
void imprime ( int mat[1][3] )
{
	int i, j;
	for ( i=0; i < 2; i++ )
	{
		printf("\n");
		for ( j=0; j < 4; j++ )
			printf("%d ", mat[i][j] );
	}
}
void transposta ( int mat[1][3] )
{
	int i, j, aux[4][2];
	for ( i=0 ; i < 2; i++ )
		for ( j=0 ; j < 4; j++ )
			aux[j][i] = mat[i][j];
	for ( j=0; j < 4; j++ )
	{
		printf("\n");
		for ( i=0; i < 2; i++ )
			printf("%d ", aux[j][i] );
	}
}
