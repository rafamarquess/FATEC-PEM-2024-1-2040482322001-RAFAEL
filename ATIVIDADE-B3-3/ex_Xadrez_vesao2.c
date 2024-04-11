#include <stdio.h>

void print_board(char board[8][8][4]) {
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
    char board[8][8][4] = {
        {"Tp1", "Cp1", "Bp1", "Dp1", "Rp1", "Bp2", "Cp2", "Tp2"},
        {"Pp1", "Pp2", "Pp3", "Pp4", "Pp5", "Pp6", "Pp7", "Pp8"},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
        {"Pb1", "Pb2", "Pb3", "Pb4", "Pb5", "Pb6", "Pb7", "Pb8"},
        {"Tb1", "Cb1", "Bb1", "Db1", "Rb1", "Bb2", "Cb2", "Tb2"}
    };

    print_board(board);

    return 0;
}