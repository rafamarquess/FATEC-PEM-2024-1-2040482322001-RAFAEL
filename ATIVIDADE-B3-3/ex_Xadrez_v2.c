#include <stdio.h>

#define LINHA 8 
#define COLUNA 8 
#define CARACTERE 4 

void print_board(char board[LINHA][COLUNA][CARACTERE]) {
    
    printf("\n   a   b   c   d   e   f   g   h\n");
    printf("  -------------------------------\n");
    
    for (int i = 7; i >= 0; i--) {
        printf("%d|", i+1);
        for (int j = 0; j < 8; j++) {
            printf("%s ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char board[LINHA][COLUNA][CARACTERE] = {
        {"Tb1", "Cb1", "Bb1", "Db1", "Rb1", "Bb2", "Cb2", "Tb2"},
        {"Pb1", "Pb2", "Pb3", "Pb4", "Pb5", "Pb6", "Pb7", "Pb8"},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {"Pp1", "Pp2", "Pp3", "Pp4", "Pp5", "Pp6", "Pp7", "Pp8"},
        {"Tp1", "Cp1", "Bp1", "Dp1", "Rp1", "Bp2", "Cp2", "Tp2"},
    };

    print_board(board);

    return 0;
}