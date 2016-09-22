#include <stdio.h>
#include <math.h>
float delta ( float A, float B, float C);
int main ()
{
	float a, b, c, d;
	float x1, x2, x;
	printf("Insira o valor a: ");
	scanf("%f", &a);
	printf("Insira o valor b: ");
	scanf("%f", &b);
	printf("Insira o valor c: ");
	scanf("%f", &c);
	d = delta(a, b, c);
	if ( d>0 )
	{
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("Delta > 0!\n Raizes: %f e %f", x2, x1);
	}
	if ( d == 0 )
	{
		x = -b/(2*a);
		printf("Delta = 0!\n Raizes: %f e %f", x, x);
	}
	if ( d <0 )
	{
		printf("Delta < 0!\n Raizes: %f + %f*I  %f - I*%f*I ", -b/(2*a), sqrt(-d)/(2*a), -b/(2*a), sqrt(-d)/(2*a)  );
	}
	return 0;
}
float delta ( float A, float B, float C)
{
	float Delta = (B*B) - (4*A*C);
	return Delta;
}
