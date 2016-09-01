#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int i=0;
	char palavra[80];
	char olheiro;
	printf("Digite uma frase: ");
	gets(palavra);
	olheiro = palavra[i];
	while ( olheiro != '\0' )
	{
		palavra[i] = tolower(olheiro);
		i++;
		olheiro = palavra[i];
	}
	printf("\n\nA frase digitada e' %s", palavra);
	return 0;
}
