#include <stdio.h>
#define MAXPILHA 1024
typedef float DADO;
typedef struct Pilha_ {
    int idtopo;
    DADO dados[MAXPILHA];
} Pilha;

void push ( Pilha * ppilha, DADO elemento );
void pop ( Pilha * ppilha );
DADO top( Pilha pilha );
int empty ( Pilha pilha );

int main () {
    FILE * arquivo;
    arquivo = fopen("dados.txt", "r");
    float aux;
    int i;
    Pilha pilha;
    pilha.idtopo = -1;
    if (arquivo == NULL)
        printf("Erro ao abrir o arquivo!\n");
    else {
        while (!feof(arquivo)) {
            fscanf(arquivo,"%f",&aux);
            push(&pilha, aux);
        }
    }
    while (!empty(pilha)) {
        printf("%g ", top(pilha));
        pop(&pilha);
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
