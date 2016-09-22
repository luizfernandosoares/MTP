#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int gerar_carta();
char mostrar_carta(int carta);

int main(){
    srand(time(0));
    int i, contador = 0, mesa = 0, quant, carta1 = gerar_carta(),carta2 = gerar_carta(), carta;
    mesa = gerar_carta() + gerar_carta();
    printf("Deseja quantas cartas? \n");
    scanf("%d", &quant);
    for(i=1; i<= quant;i++){
        carta = gerar_carta();
        printf(" %c ", mostrar_carta(carta));
        contador = contador + carta;
    }
    printf("\nSoma: %d ", contador);
    if(contador > 21){
        printf("\nPerdeu! \n");
    }
    else{
        if(contador > mesa)
            printf("\nGanhou! \n");
        else printf("\nPerdeu! \n");
    }
    return 0;
}

int gerar_carta()
{
    int carta;
    carta = rand()%13 + 1;
    return carta;
}

char mostrar_carta(int carta)
{
        char figura;
        switch( carta){
            case 1: figura = 'A';
                break;
            case 10: figura = 'D';
                break;
            case 11: figura = 'J';
                break;
            case 12: figura = 'Q';
                break;
            case 13: figura = 'K';
                break;
            default: figura = 48 + carta;
        }
        return figura;
}
