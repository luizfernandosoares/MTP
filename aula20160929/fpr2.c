#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define n 256

void letras ( char *str, int tamanho );

int main ()
{
	char frase[n];
	printf("Digite uma frase: ");
	gets(frase);
	letras( frase, strlen(frase) );
	return 0;
}
void letras ( char *str, int tamanho )
{
	char newstr[n];
	int i, j=0;
	for ( i=0; i<tamanho; i++ )
		if ( isalpha(str[i]) )
		{
			newstr[j] = str[i];
			j++;
		}
	newstr[j] = '\0';
	printf("\n%s", newstr);
}
