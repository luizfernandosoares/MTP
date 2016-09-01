#include<stdio.h>
#include<complex.h>

int main()
{
	double complex Z1, Z2, soma, produto;
	double preal, pimag;
	printf("Parte real de Z1: ");
	scanf("%lf", &preal);
	printf("\nParte imaginaria de Z1: ");
	scanf("%lf", &pimag);
	Z1 = preal + pimag*I;
	printf("\nParte real de Z2: ");
	scanf("%lf", &preal);
	printf("\nParte imaginaria de Z2: ");
	scanf("%lf", &pimag);
	Z2 = preal + pimag*I;
	soma = Z1 + Z2;
	produto = Z1*Z2;
	printf("\nSoma: %lf + %lf i\n", creal(soma), cimag(soma) );
	printf("\nSoma: %lf /_ %lf rad\n", cabs(soma), carg(soma)) ;
	printf("\nProduto: %lf + %lf i\n", creal(produto), cimag(produto) );
	printf("\nProduto: %lf /_ %lf rad\n", cabs(produto), carg(produto) );
	return 0;	
}
