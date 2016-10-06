#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

float Media ( float *numeros );
float Desvio_PD ( float *numeros, float m );
float Desvio_PP ( float *numeros, float m );
int main ()
{
	int i;
	float numeros[N], media, desvio_padrao, desvio_populacional;
	printf("Insira 5 valores (please): \n");
	for (i=0; i<N; i++ )
	{
		printf("Valor [%d]: ", i+1);
		scanf("%f", &numeros[i] );
	}
	media = Media(numeros);
	desvio_padrao = Desvio_PD(numeros, media);
	desvio_populacional = Desvio_PP(numeros, media);
	printf("\nMedia: %g\nDesvio padrao: %g\nDesvio Populacional: %g\n\n", media, desvio_padrao, desvio_populacional );
	return 0;
}
float Media ( float *numeros )
{
	int i;
	float m, somatorio = 0;
	for ( i=0; i<N; i++ )
		somatorio += numeros[i];
	m = somatorio/N;
	return m;	
}
float Desvio_PD ( float *numeros, float m )
{
	int i;
	float somatorio = 0, s;
	for ( i=0; i<N; i++ )
		somatorio += pow( (numeros[i] - m ), 2 );
	s = sqrt( ( 1/( (float)N - 1) )*somatorio  );
	return s;
}
float Desvio_PP ( float *numeros, float m )
{
	int i;
	float somatorio = 0, sigma;
	for ( i=0; i<N; i++ )
		somatorio += pow( (numeros[i] - m ), 2 );	
	sigma = sqrt( (1/ (float)N )*somatorio  );
	return sigma;
}
