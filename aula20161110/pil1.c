#include <stdio.h>
#define MAXPILHA 10
typedef char DADO; // Muda o tipo da pilha aqui
typedef struct Pilha_ {
    int idtopo; //índice do topo
    DADO dados[MAXPILHA];
} Pilha;

void push ( Pilha * ppilha, DADO elemento );
void pop ( Pilha * ppilha );
DADO top( Pilha pilha ); //Como está só verificando, pode ser SEM referência. Caso modificar, passar por referência
int empty ( Pilha pilha );

int main () {
    int i;
    Pilha pilha;
    pilha.idtopo = -1; //Pilha vazia
    //Programa
    printf("PUSH: ");
    for ( i=0; i < 5; i++ ){
        push(&pilha, 'A'+i); //Testa PUSH
        printf("%c ", top(pilha) );
    }
    printf("\nPop: ");
    while (!empty(pilha)) { //Testa empty
        printf("%c ", top(pilha)); //Testa TOP
        pop(&pilha);
    }
    printf("\nEstouro? ");
    for ( i=0; i< MAXPILHA+1; i++ ) { //Tentar estouro de pilha
        push(&pilha, 'A'+i); //Testa PUSH
        printf("%c ", top(pilha) );
    }
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
        ppilha->dados[ppilha->idtopo] = 0x0; //opcional: "limpa elemento"
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
