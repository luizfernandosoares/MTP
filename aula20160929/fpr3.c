#include<stdio.h>
#include<stdlib.h>

void teste ( float *vet1, float *vet2, int tam1, int tam2 );

int main ()
{
	float vet1[] = {1.0, 2.5, 3.77, 5.55, 31.5, 38.45, 41.3, 100.26, 101.2};
	float vet2[] = {1.0, 2.2, 3.5, 5.55, 10.1, 41.3, 101.2};
	int tam1 = sizeof(vet1)/sizeof(float);
	int tam2 = sizeof(vet2)/sizeof(float);
	teste(vet1, vet2, tam1, tam2);
	return 0;
}
void teste ( float *vet1, float *vet2, int tam1, int tam2 )
{
	float vet_aux[20];
	int i, j, cont = 0;
	for ( i = 0; i<tam1; i++ )
		for ( j = 0; j<tam2; j++ )
			if ( vet1[i] == vet2[j] )
			{
				vet_aux[cont] = vet2[j];
				cont++; 
			}
	for ( i =0; i < cont; i++ )
		printf("%g ", vet_aux[i] );		
}
