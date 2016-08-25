#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int n, i, teste=0;
	printf("Insira um numero: ");
	scanf("%d", &n);
	for ( i=1; i<n; i++ )
	{
		if ( n%i == 0 )
			teste = teste + i;
	}
	if ( teste == n )
	    printf("\n\nO numero e' perfeito!\n");
	else
	    printf("\nO numero nao e' perfeito!\n");
	return 0;
}
