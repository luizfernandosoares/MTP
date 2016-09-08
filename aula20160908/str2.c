#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char frase[512], aux[512];
	int i,j=1;
	printf("Digite uma frase/palavra: ");
	gets(frase);
	aux[0] = frase[0];
	for ( i=0; frase[i]; i++ )
		if ( frase[i] == ' ')
		{
		    aux[j] = frase[i+1];
		    j++;
		    strupr(aux);
		}
	printf("Frase secreta: %s", aux);
	return 0;
}
