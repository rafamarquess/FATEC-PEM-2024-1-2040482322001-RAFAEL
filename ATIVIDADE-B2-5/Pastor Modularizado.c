#include <stdio.h>
#include <string.h>

#define LINHA 8 
#define COLUNA 8 
#define CARACTERE 4 

void printTabuleiro(char tabuleiro[LINHA][COLUNA][CARACTERE]) {
    printf("\n   a   b   c   d   e   f   g   h\n");
    printf("  -------------------------------\n");
    
    for (int i = 7; i >= 0; i--) {
        printf("%d|", i+1);
        for (int j = 0; j < 8; j++) {
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void moverPeca(char tabuleiro[LINHA][COLUNA][CARACTERE], int origemLinha, int origemColuna, int destinoLinha, int destinoColuna) {
    strcpy(tabuleiro[destinoLinha][destinoColuna], tabuleiro[origemLinha][origemColuna]);
    strcpy(tabuleiro[origemLinha][origemColuna], "...");
}

void inicializaTabuleiro(char tabuleiro[LINHA][COLUNA][CARACTERE]) {
    char inicial[LINHA][COLUNA][CARACTERE] = {
        {"Tb1", "Cb1", "Bb1", "Db1", "Rb1", "Bb2", "Cb2", "Tb2"},
        {"Pb1", "Pb2", "Pb3", "Pb4", "Pb5", "Pb6", "Pb7", "Pb8"},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {"Pp1", "Pp2", "Pp3", "Pp4", "Pp5", "Pp6", "Pp7", "Pp8"},
        {"Tp1", "Cp1", "Bp1", "Dp1", "Rp1", "Bp2", "Cp2", "Tp2"},
    };
    memcpy(tabuleiro, inicial, sizeof(inicial));
}

void printCabecalho(const char* descricao) {
    printf("\n=========================================\n");
    printf("              %s               \n", descricao);
    printf("=========================================\n");
}

void processaJogada(char tabuleiro[LINHA][COLUNA][CARACTERE], int origemLinha, int origemColuna, int destinoLinha, int destinoColuna, const char* descricao) {
    printf("%s", descricao);
    moverPeca(tabuleiro, origemLinha, origemColuna, destinoLinha, destinoColuna);
    printTabuleiro(tabuleiro);
}

int main() {
    char tabuleiro[LINHA][COLUNA][CARACTERE];
    
    inicializaTabuleiro(tabuleiro);

    printf("==============================================\n");
    printf("         Posicao Inicial do Tabuleiro         \n");
    printf("==============================================");
    printTabuleiro(tabuleiro);

    //(jogada 1)
    printCabecalho("Jogada #1");
    processaJogada(tabuleiro, 1, 4, 3, 4, "\n-----------Brancas Jogam e4-----------"); // Pb4 se move para e4
    processaJogada(tabuleiro, 6, 4, 4, 4, "\n-----------Pretas Jogam e5------------"); // Pp4 se move para e5
    
    //(jogada 2)
    printCabecalho("Jogada #2");
    processaJogada(tabuleiro, 0, 5, 3, 2, "\n-----------Brancas Jogam Bc4-----------"); // Bb2 se move para c4
    processaJogada(tabuleiro, 7, 1, 5, 2, "\n-----------Pretas Jogam Cc6------------"); // Cp1 se move para c6
    
    //(jogada 3)
    printCabecalho("Jogada #3");
    processaJogada(tabuleiro, 0, 3, 4, 7, "\n-----------Brancas Jogam Dh5-----------"); // Db1 se move para h5
    processaJogada(tabuleiro, 7, 6, 5, 5, "\n-----------Pretas Jogam Cf6------------"); // Cp2 se move para f6
    
    //(jogada 4)
    printCabecalho("Jogada #4 (Xeque Mate)");
    processaJogada(tabuleiro, 4, 7, 6, 5, "\n----Brancas capturam Peao Pp6 em f7 e XEQUE MATE!!!----"); // Db1 se move para f7

    return 0;
}