#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, *pa, *pb;
	float soma;
	printf("Insira um numero a: ");
	scanf("%f", &a);
	pa = &a;
	printf("\nInsira um numero b: ");
	scanf("%f", &b);
	pb = &b;
	soma = a+b;
	printf("\n\nSoma: %f", soma);
	printf("\nEndereco de a: %p\nEndereco de b: %p\n", pa, pb);
	printf("Endereco da soma: %p", &soma);
	return 0;
}
