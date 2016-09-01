#include<float.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	srand(time(0));
	float E = FLT_EPSILON;
	if ( 1.0>(1.0-E) )
	   printf("O numero 1 e' maior que 1 menos o epsilon  da maquina!\n");
	else
	   printf("O numero 1 nao e' maior que 1 menos o epsilon  da maquina! Epsilon = %f\n", FLT_EPSILON);
	printf("%f", (float)rand()/(float)RAND_MAX); /* Usa-se (float) para transformar o numero em float!*/
	return 0;		
}
