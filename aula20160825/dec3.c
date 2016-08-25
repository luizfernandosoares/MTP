#include<stdio.h>
#include<time.h>

int main ()
{
	srand(time(0));
	int A, B, C;
	A = rand()%7;
	B = rand()%7;
	C = rand()%7;
	if ( (A+B+C) == 7 || (A+B+C) == 11 )
		printf("Voce ganhou, yay!\n");
	else
	    printf("Voce perdeu, tente novamente :c\n");
	printf("Valores dos dados A, B e C\n\n");
	printf("A = %d\nB = %d\nC = %d\n", A, B, C);
	return 0;
	
}
