#include <stdio.h>

int coef_bino ( int a, int n);
int main ()
{
	int a, n, coef, i=0;
	printf("Insira o valor n: ");
	scanf("%d", &n);
	printf("Insira o valor a: ");
	scanf("%d", &a);
	coef = coef_bino(a,n);
	printf("%d\n", coef);
	return 0;
}
int coef_bino ( int a, int n )
{
	int coefiente;
	if ( n == 0 )
		return 1;
	return ( n == 0 )? coeficiente : ( coeficiente =  (a/n)*coef_bino(a-1, n-1) );
}
