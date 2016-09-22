#include <stdio.h>
#include <time.h>
#include <conio.h>
int dado (char hue);

int main ()
{
	srand(time(0));
	char hue;
	int i, soma, cont = 0;
	do
	{
		soma = 0;
		system("cls");
		for ( i=1; i<6; i++ )
		{
			printf("Pressione enter para jogar o dado! ");
			scanf("%c", &hue);
			soma = soma + dado(hue);
		}
		if ( soma == 21 )
		{
		 	printf("\nVoce ganhou! :D\n");
		 	return 0;
		}
		cont++;
	}while(cont!=3);
	printf("\nVoce perdeu! :c");
	return 0;
}
int dado ( char hue )
{
	int aleatorio = rand()%6 + 1;
	printf("%d\n", aleatorio);
	return aleatorio;
}
