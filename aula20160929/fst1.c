#include <stdio.h>

struct DIVISAO 
{
	int quociente;
	int resto;
};

struct DIVISAO divisao ( int divisor, int dividendo );
int main ()
{
	struct DIVISAO answer;
	int dividendo, divisor;
	printf("Insira o dividendo: ");
	scanf("%d", &dividendo);
	printf("Insira o divisor: ");
	scanf("%d", &divisor);
	if ( divisor != 0 )
	{
		answer = divisao(divisor, dividendo);
		printf("\nQuociente: %d \nResto: %d\n\n", answer.quociente, answer.resto );
	}
	else
		printf("\nDivisor = 0, isso e' impossivel!!\n\n");
	return 0;
}
struct DIVISAO divisao ( int divisor, int dividendo )
{
	struct DIVISAO resposta;
	resposta.quociente = dividendo / divisor;
	resposta.resto = dividendo % divisor;
	return resposta;
}
