#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float n, area;
	printf("Insira o valor do lado de um quadrado: ");
	scanf("%f", &n);
	fflush(stdin);
	area = pow(n,2);
	printf("A area do quadrado e': %f", area);
	return 0;
}
