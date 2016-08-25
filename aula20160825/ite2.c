#include<stdio.h>
#include<stdlib.h>

int main()
{
	int B, P, i, Potencia;
	printf("Informe o valor da base B: ");
	scanf("%d", &B);
	printf("\nInforma o valor do expoente P: ");
	scanf("%d", &P);
	if ( P != 0 )
	{
		Potencia = B;
		for ( i=1; i<P; i++ )
		{
			Potencia = Potencia*B;
		}
	}
	else
	    Potencia = 1;
	printf("\n\nO valor de B elevado a P e': %d", Potencia);
	return 0;
}
