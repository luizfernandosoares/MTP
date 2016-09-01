#include<stdio.h>
#include<math.h>

int main ()
{
	double b, c, A, a;
	printf("Insira um lado b e um triangulo: ");
	scanf("%lf", &b);
	printf("\nInsira um lado c e um triangulo: ");
	scanf("%lf", &c);
	printf("\nInsira o angulo (em radianos) formado entre os lados b e c: ");
	scanf("%lf", &A);
	a = sqrt ( pow(b,2) + pow(c,2) - 2*b*c*cos(A) );
	printf("\n\nO valor do lado que falta e': %.4lf", a);
	return 0;
}
