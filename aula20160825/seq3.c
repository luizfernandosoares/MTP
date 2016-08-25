#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float A, B, C, Media;
	int i;
	printf("Programa que calcula medias ponderadas de notas entre 0 e 10: \n\n");
	printf("Insira a nota do aluno A: ");
	scanf("%f", &A);
	if ( A>= 0.0 && A<=10.0)
	{
		printf("\nInsira a nota do aluno B: ");
	    scanf("%f", &B);
	}
	else
	{
		printf("Valor 'A' nao permitido!");
		return 0;
	}
	if ( B>= 0.0 && B<=10.0)
	{
		printf("\nInsira a nota do aluno C: ");
	    scanf("%f", &C);
	}
	else
	{
		printf("Valor 'B' nao permitido!");
		return 0;
	}
	if ( C>=0.0 && C<=10.0)
	{
		Media = (A*2 + B*3 + C*5)/10;
	    printf("\n\nA media ponderada dos 3 alunos e': %.2f\n\n", Media);
	}
	else
	{
		printf("Valor 'C' nao permitido!");
		return 0;
	}
	return 0;
}
