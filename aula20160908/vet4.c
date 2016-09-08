#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	srand(time(0));
	int num, vet[11], i;
	int maior, menor;
	printf("Insira um numero entre 0 e 1000: ");
	scanf("%d", &num);
	vet[0] = num;
	for ( i=1; i<11; i++ )
	    vet[i] = rand()%10;
	for ( i=0; i<11; i++ )
	{
		if ( vet[i] > vet[i+1] )
		    maior = vet[i];
		if ( vet[i] < vet[i+1] )
		    menor = vet[i];
	}
	printf("\nMaior: %d \nMenor: %d", maior, menor);
	return 0;
}
