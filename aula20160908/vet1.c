#include<stdio.h>
#include<time.h>
#define n 10000

int main()
{
	srand(time(0));
	unsigned int num, i;
	float media, vet[n], soma=0.0;
	printf("Insira um numero nao negativo: ");
	scanf("%d", &num);
	for ( i=0; i<n; i++)
	{
		vet[i] = rand()%(num+1);
		soma = soma + vet[i];
	}
	media = (float)(soma+num)/(float)n;
	printf("\nA media e': %f", media);
	return 0;
}
