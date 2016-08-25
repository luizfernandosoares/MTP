#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int num_aleatorio, num_digitado, cont=0;
	num_aleatorio = rand()%100;
	do
	{
		system("cls");
		printf("Digite um numero: ");
		scanf("%d", &num_digitado);
		if ( num_digitado > num_aleatorio )
		{
			printf("Alto!\n");
			cont++;
		}
		if ( num_digitado < num_aleatorio )
		    {
		    	printf("Baixo!\n");
		    	cont++;
			}
		if ( num_digitado == num_aleatorio )
		    printf("Acertou! :D\n");
		system("PAUSE");
	} while(num_digitado != num_aleatorio);
	printf("\n\nO numero de tentativas sao de: %d", cont);
	return 0;
}
