#include<stdio.h>
#include<math.h>

int main ()
{
	float n, b, logaritmo;
	printf("Insira um numero n: ");
	scanf("%f", &n);
	printf("\nInsira uma base para o logaritmo de n: ");
	scanf("%f", &b);
	logaritmo = ( log(n) )/( log(b) );
	printf("\n\nO logaritmo de %f na base %f e': %f", n, b, logaritmo);
	return 0;
}
