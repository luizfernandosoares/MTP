#include<stdio.h>
#include<complex.h>
#include<math.h>

int main()
{
	double complex Z, raiz;
	double preal, pimag;
	printf("Parte real de Z: ");
	scanf("%lf", &preal);
	printf("\nParte imaginaria de Z: ");
	scanf("%lf", &pimag);
	Z = preal + pimag * I;
	raiz = csqrt(Z);
	printf("\nA raiz de Z e' %lf + %lf i\n", creal(raiz), cimag(raiz) );
	return 0;	
}
