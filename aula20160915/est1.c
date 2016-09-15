#include<stdio.h>
#include<math.h>

#define RECEBE(c,p) \
      ({ printf("Entre com coord x do ponto %s: ",c); \
	     scanf("%f", &p.x);                           \
		 printf("Entre com coord y do ponto %s: ",c); \
	     scanf("%f", &p.y); })
#define MOSTRA(p)   \
      ({ printf("( %g; %g )\n", p.x, p.y); })
#define SOMA(a,b,s)       \
      ({ s.x = a.x + b.x;  \
	     s.y = a.y + b.y; })
#define DISTANCIA(a,b) \
      sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y,2.0) )

struct Ponto
{
	float x;
	float y;
};

int main ()
{
	float distancia;
	struct Ponto A, B, S;
	RECEBE("A", A);	RECEBE("B", B);
	SOMA(A,B,S);
	MOSTRA(S);
	distancia = DISTANCIA(A,B);
	printf("\nA distancia entre eles: %g", distancia);
	return 0;
}
