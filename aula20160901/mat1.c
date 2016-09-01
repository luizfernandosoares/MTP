#include<stdio.h>
#include<math.h>

int main ()
{
	float d, x1, y1, x2, y2;
	printf("Insira as coordenadas do ponto P1:");
	printf("\nx1: ");
	scanf("%f", &x1);
	printf("\ny1: ");
	scanf("%f", &y1);
	printf("Insira as coordenadas do ponto P2:");
	printf("\nx2: ");
	scanf("%f", &x2);
	printf("\ny2: ");
	scanf("%f", &y2);
	d = sqrt ( pow((x2-x1),2) + pow((y2-y1),2) );
	printf("\n\nA distancia P1 e P2 e': %f", d);
	return 0;
}
