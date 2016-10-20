#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void lerNumeros ( int n, char * nome );
int main () {
    srand(time(0));
    int n;
    char nome[256];
    printf("Insira o numero de dados que vc digitou no esc2.c: ");
    scanf("%d", &n);
    printf("Insira o nome do seu arquivo que vc criou no esc2.c: ");
    scanf("%s", nome);
    lerNumeros(n, nome);
    return 0;
}
void lerNumeros ( int n, char * nome ) {
    FILE * arquivo;
    int aux;
    int i;
    arquivo = fopen(nome, "r");
    if ( arquivo == NULL )
        fprintf(stderr, "Arquivo nao existente!\n");
    else {
            while( !feof(arquivo) ) {
                fscanf(arquivo,"%d",&aux);
                printf("%d ",aux);
                }
            fclose(arquivo);
        }
}
