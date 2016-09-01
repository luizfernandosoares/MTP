#include<stdio.h>
#include<ctype.h>

int main ()
{
	int i = 0, cont = 0;
	char frase[256];
	char test;
	printf("Digite uma frase: ");
	gets(frase);
	test = frase[i];
	while (test)
	{
		if ( isspace(test)==0 && isalpha(test)!=0 )
		    cont++;
		i++;
		test = frase[i];
	}
	printf("\nO numero de letras na frase e' %d", cont);
	return 0;
}
