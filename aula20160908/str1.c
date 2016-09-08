#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int i;
	char frase[256];
	printf("Entre com uma frase: ");
	gets(frase);
	for ( i=0; frase[i]; i++ )
	     frase[i] = toupper(frase[i]);
	printf("A frase tem %d caracteres.\n", strlen(frase) );
	if (strcmp(frase,"BOM DIA") == 0 )
	     printf("\nBom dia para voce tambem!\n");
	else
	     printf("Voce quer dizer: %s", frase);
	return 0;
}
