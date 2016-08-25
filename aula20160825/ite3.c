#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char str[256];
	int i, cont=0;
	printf("Digite um texto: ");
	scanf("%s", str);
	fflush(stdin);
	for ( i=0; str[i] != '\0'; i++ )
	    cont++;
	printf("\nO numero de caracteres digitados sao: %d", cont);
	return 0;
}
