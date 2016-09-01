#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main ()
{
	int64_t fatorial=1;
	int i, num;
	printf("Insira um numero: ");
	scanf("%d", &num);
	for ( i=1; i<(num+1) ; i++)
	{
		fatorial = fatorial*i;
	}
	printf("\n\nO fatorial do nuemro e': %" PRId64 ".\n", fatorial);
	return 0;
}

