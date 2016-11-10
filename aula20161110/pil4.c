#include <stdio.h>
#define MAXPILHA 10
typedef char DADO;
typedef struct Pilha_ {
    int idtopo;
    DADO dados[MAXPILHA];
} Pilha;

void push ( Pilha * ppilha, DADO elemento );
void pop ( Pilha * ppilha );
DADO top( Pilha pilha );
int empty ( Pilha pilha );

int main () {
    int num, aux, BIT;
    Pilha pilha;
    pilha.idtopo = -1;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    aux = num;
    while ( aux > 0) {
        BIT = aux%2;
        push(&pilha, BIT);
        aux = aux/2;
    }
    printf("Numero [%d] em binario: \n");
    while (!empty(pilha)) {
        printf("%d ", top(pilha));
        pop(&pilha);
    }
    printf("\n");
    return 0;
}
void push ( Pilha * ppilha, DADO elemento ) {
    if ( ppilha->idtopo + 1 < MAXPILHA  ) {
        ppilha->idtopo++;
        ppilha->dados[ppilha->idtopo] = elemento;
    }
    else
        fprintf(stderr, "\nError: Estouro de pilha!\n");
}
void pop ( Pilha * ppilha ) {
    if ( ppilha->idtopo >= 0 ) {
        ppilha->dados[ppilha->idtopo] = 0x0;
        ppilha->idtopo--;
    }
    else
        fprintf(stdout, "\nWARNING: Pilha vazia!\n\n");
}
DADO top( Pilha pilha ) {
    return pilha.dados[pilha.idtopo];
}
int empty ( Pilha pilha ) {
    return ( pilha.idtopo == -1);
}
