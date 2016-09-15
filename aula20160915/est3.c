#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define QTDEMAX 1000

struct cadastro
{
  	char nome[200];
  	int idade;
  	int telefone;
};
struct cadastro CAD[QTDEMAX];

int main ()
{
	int op, op2, quantidade = 0, i=0;
	do 
	{
		system("cls");
		printf("1 - Cadastra, 2 - Sair: ");
		scanf("%d", &op);
		switch(op)
			case 1:
				{
					quantidade++;
					printf("\nCadastro:\n");
					printf("Insira o nome: ");
					fflush(stdin);
					gets(CAD[i].nome);
					printf("\nInsira a idade: ");
					scanf("%d", &CAD[i].idade);
					printf("\nInsira o telefone: ");
					scanf("%d", &CAD[i].telefone);
					i++;
					break;
				}
	}while(op!=2);
	fflush(stdin);
	printf("\nTecle 1 para listar todos os nomes, 2 para todas as idades e 3 para todos os telefone: ");
	scanf("%d", &op2);
	if ( op2 == 1 )
		for ( i=0; i<quantidade; i++ )
	   		printf("%s\n", CAD[i].nome );
	if ( op2 == 2 )
		for ( i=0; i<quantidade; i++ )
	   		printf("%d\n", CAD[i].idade );
	if ( op2 == 3 )
		for ( i=0; i<quantidade; i++ )
	   		printf("%d\n", CAD[i].telefone );
	return 0;
}
