#include <stdio.h>
struct Pixel { //essa estrutura tem que ser na ordem B > G > R
    unsigned char B;
    unsigned char G;
    unsigned char R;
};
int main () {
    int WPX, HPX, BPP, PAL, i, j, k, AUX, NCP, offset;
    struct Pixel pixel, pixel2;
    FILE * imagem, * imagem2;
    unsigned char byte; // 1 byte
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    imagem = fopen("Mario1.bmp", "rb");
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
    //word	6-7	Informação reservada /* não vai ter nada aqui, gg */
    //word	8-9	Informação reservada /* não vai ter nada aqui, gg */
    fseek(imagem, 2*sizeof(word), SEEK_CUR);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof(dword), 1, imagem);
    offset = dword;
    printf("Offset (em bytes): %u\n", offset);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabeçalho (em bytes): %u\n", dword);
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
    //dword	30-33	Método de compressão
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Método de compressão (em bytes): %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (em bytes): %u\n", dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução horizontal (em bytes): %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução vertical (em bytes): %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0)? 1 << BPP : dword; // 1 << BPP = pow(2,BPP)
    printf("Numero de cores na paleta (em bytes): %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    printf("*****Fim da leitura do cabecalho*****\n\n");
    printf("Numero de cores importantes (em bytes): %u\n", (dword == 0)? NCP : dword);
    //Tamanho da linha da array de pixels (bytes)
    PAL = (BPP*WPX + 31)/32*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);
    imagem2 = fopen("Mario2.bmp", "wb");
    rewind(imagem);
    //Copiando o cabeçalho
    for ( i=0; i < offset; i++) {
        fread(&byte, sizeof(byte), 1, imagem);
        fwrite(&byte, sizeof(byte), 1, imagem2);
    }
    //Leitura de pixel a pixel
    byte = 0x0;
    AUX = PAL - WPX*3; //Diferencça em bytes entre a largura e a linha da array
    for ( j=0; j < HPX; j++ ) { // a cada linha da imagem
        for ( i=0; i < WPX; i++ ) { // a cada coluna da mesma linha
            fread(&pixel, sizeof(pixel), 1, imagem); // canais R, G e B
            pixel2.R= pixel.G;
            pixel2.G= pixel.R;
            pixel2.B= pixel.B;
            fwrite(&pixel2, sizeof(pixel2), 1, imagem2);
            }
        if ( AUX > 0 ) {
            fseek(imagem, AUX, SEEK_CUR); // sem informação útil
            for ( k=0; k < AUX; k++ )
                fwrite(&byte, sizeof(byte), 1, imagem2); // sem informação útil
        }
    }
    fclose(imagem);
    fclose(imagem2);
    return 0;
}
