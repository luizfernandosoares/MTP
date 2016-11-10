#include <stdio.h>
#define MAXPILHA 1024
typedef int DADO;
typedef struct Pilha_ {
    int idtopo;
    DADO dados[MAXPILHA];
} Pilha;

void push ( Pilha * ppilha, DADO elemento );
void pop ( Pilha * ppilha );
DADO top( Pilha pilha );
int empty ( Pilha pilha );
void inversao ( int numero, Pilha pilha );
void salvar(Pilha pilha);

int main () {
    int num, op;
    Pilha pilha;
    pilha.idtopo = -1;
    printf("Digite um numero inteiro positivo ou tecle -1 para sair: ");
    for(;;) {
        scanf("%d", &num);
        if ( num != -1 )
            push(&pilha, num);
        else
            break;
    }
    printf("\n\nTecle 1 para mostrar na tela\nTecle 2 para salvar em um arquivo ");
    scanf("%d", &op);
    switch (op) {
    case 1:
        inversao(num, pilha);
        break;
    case 2:
        salvar(pilha);
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
void inversao ( int numero, Pilha pilha ) {
     if ( numero == -1 )
        while (!empty(pilha)) {
            printf("%d ", top(pilha));
            pop(&pilha);
        }
}
void salvar ( Pilha pilha ) {
    FILE * arquivo;
    int aux;
    arquivo = fopen ("arquivo.txt", "w");
    if (arquivo)
        while (!empty(pilha)) {
            aux = top(pilha);
            fprintf(arquivo, "%d ", aux);
            pop(&pilha);
        }
    fclose(arquivo);
}
