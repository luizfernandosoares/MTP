#include<stdio.h>
#include<ctype.h>

int main ()
{
	int i=0;
	char frase[256];
	char test;
	printf("Digite uma frase qualquer: ");
	gets(frase);
	test = frase[i];
	while (test)
	{
		frase[i] = toupper(test);
		i++;
		test = frase[i];
	}
	printf("\n%s", frase);
	return 0;a
}
