#include<stdio.h>
#include<complex.h>

int main()
{
	double complex Z,Z_conjugado, produto;
	double preal, pimag;
	printf("Parte real de Z: ");
	scanf("%lf", &preal);
	printf("\nParte imaginaria de Z: ");
	scanf("%lf", &pimag);
	Z_conjugado = conj(Z);
	produto = Z * Z_conjugado;
	printf("\nProduto: %lf + %lf i\n", creal(produto), cimag(produto) );
	printf("\nProduto: %lf /_ %lf rad\n", cabs(produto), carg(produto) );
	return 0;	
}
