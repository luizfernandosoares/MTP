#include <stdio.h>
struct Pixel { //essa estrutura tem que ser na ordem B > G > R
    unsigned char B;
    unsigned char G;
    unsigned char R;
};
int main () {
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP;
    struct Pixel pixel;
    FILE * imagem;
    unsigned char byte; // 1 byte
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    imagem = fopen("sans.bmp", "rb");
    if ( imagem == NULL ) {
        fprintf(stderr, "Arquivo nao encontrado!\n");
        return 1;
    }
    printf("*****Leitura do cabecalho*****\n\n");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquio (em bytes): %u\n", dword);
    //word	6-7	Informa��o reservada /* n�o vai ter nada aqui, gg */
    //word	8-9	Informa��o reservada /* n�o vai ter nada aqui, gg */
    fseek(imagem, 2*sizeof(word), SEEK_CUR);
    //dword	10-13	Offset, onde dados da imagem come�am
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset (em bytes): %u\n", dword);
    //dword	14-17	Tamanho do cabe�alho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabe�alho (em bytes): %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (em bytes): %u\n", WPX);
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem (em bytes): %u\n", HPX);
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores (em bytes): %u\n", word);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("Bits por pixel (em bytes): %u\n", BPP);
    //dword	30-33	M�todo de compress�o
    fread(&dword, sizeof(dword), 1, imagem);
    printf("M�todo de compress�o (em bytes): %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (em bytes): %u\n", dword);
    //dword	38-41	Resolu��o horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolu��o horizontal (em bytes): %u\n", dword);
    //dword	42-45	Resolu��o vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolu��o vertical (em bytes): %u\n", dword);
    //dword	46-49	N�mero de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0)? 1 << BPP : dword; // 1 << BPP = pow(2,BPP)
    printf("Numero de cores na paleta (em bytes): %u\n", NCP);
    //dword	50-53	N�mero de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    printf("*****Fim da leitura do cabecalho*****\n\n");
    printf("Numero de cores importantes (em bytes): %u\n", (dword == 0)? NCP : dword);
    //Tamanho da linha da array de pixels (bytes)
    PAL = (BPP*WPX + 31)/32*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);
    //Leitura de pixel a pixel
    AUX = PAL - WPX*3; //Diferenc�a em bytes entre a largura e a linha da array
    for ( j=0; j < HPX; j++ ) { // a cada linha da imagem
        for ( i=0; i < WPX; i++ ) { // a cada coluna da mesma linha
            fread(&pixel, sizeof(pixel), 1, imagem); // canais R, G e B
            printf("R: %hhu  G: %hhu  B: %hhu\n", pixel.R, pixel.G, pixel.B);
            }
        if ( AUX > 0 ) {
            fseek(imagem, AUX, SEEK_CUR);
        }
    }
    fclose(imagem);
    return 0;
}
