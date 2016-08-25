#include<stdio.h>

int main()
{
	int num, i, cont=0;
	printf("Insira um numero qualquer: ");
	scanf("%d", &num);
	for ( i=1; i<=num; i++ )
	{
		if ( num%i == 0 )
		    cont++;
	}
	if ( cont==2 )
	    printf("\nO numero digitado e' primo!");
	else
	    printf("\nO numero digitado nao e' primo!");
	return 0;
}
