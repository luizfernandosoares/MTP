#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
int main ()
{
	char * texto;
	printf("*** Hello!!! ***\n");
	texto = recebeTexto();
	printf("*** Inicio!!! ***\n");
	printf("%s", texto);
	printf("\nTamanho da string: %d\n", strlen(texto) );
	free(texto);
	return 0;
}
char * iniciaTexto()
{
	char * texto = (char *) malloc(sizeof(char) );
	texto[0] = '\0';
	return texto;
}
char * recebeTexto( )
{
	char * texto = iniciaTexto();
	char * aux;
	int c, tamanho = 0;
	do
	{
		c = getchar();
		if (c != '#')
		{
			aux = (char *) realloc(texto, tamanho+2);
			if ( aux != NULL )
			{
				texto = aux;
				texto[tamanho] = c;
				tamanho++;
				texto[tamanho] = '\0';
			}
			else
				printf("**Error! Out of memory!**\n  ");
		}
	}while(c != '#');
	return texto;
}