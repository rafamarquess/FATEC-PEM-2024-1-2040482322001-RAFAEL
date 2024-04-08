#include <stdio.h>
 
#define LINHAS 8
#define COLUNAS 8
 
int main()
{
    char Tabuleiro[LINHAS][COLUNAS] = {
    {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'},    
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},    
    {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
    {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
    {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
    {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},    
    {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'}, 
    };
    
    int i,j;
    
    for (i= 0; i < LINHAS; i++ ){
        printf("%d|", 8 - i);
        for (j= 0; j < COLUNAS; j++){
            printf(" %c ", Tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    printf("  -----------------------\n");
    printf("   a  b  c  d  e  f  g  h\n");
    
    return 0;
}
    
