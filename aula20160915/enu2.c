#include<stdio.h>

int main ()
{
	int mes;
	printf("Insira o numero do mes: ");
	scanf("%d", &mes);
	switch(mes)
    {
        case 1:
            printf("Voce nasceu em Janeiro!");
            break;
        case 2:
            printf("Voce nasceu em Fevereiro");
            break;
        case 3:
            printf("Voce nasceu em Marco");
            break;
        case 4:
            printf("Voce nasceu em Abril");
            break;
        case 5:
            printf("Voce nasceu em Maio");
            break;
        case 6:
            printf("Voce nasceu em Junho");
            break;
        case 7:
            printf("Voce nasceu em Julho");
            break;
        case 8:
            printf("Voce nasceu em Agosto");
            break;
        case 9:
            printf("Voce nasceu em Setembro");
            break;
        case 10:
            printf("Voce nasceu em Outubro");
            break;
        case 11:
            printf("Voce nasceu em Novembro");
            break;
        case 12:
            printf("Voce nasceu em Dezembro");
            break;
    }
}
