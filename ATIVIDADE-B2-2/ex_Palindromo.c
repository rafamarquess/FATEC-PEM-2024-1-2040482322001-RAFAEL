// Rafael Marques Alves - ADS Tarde 

#include <stdio.h>
#include <string.h>

int main()
{
    char copia[50], palavra[50];
    int i = 0, j = 0, tamanho;
    
    printf("Digite sua palavra ou frase: ");
    fgets(palavra, 50, stdin);
    
    do{
        if(palavra[i] != ' ' && palavra [i] != '\n'){
            copia[j] = palavra [i];
            j++;
        }
        i++;
    }while(palavra[i] != '\0');
    copia[j] = '\0';
    
    strcpy(palavra, copia);
    tamanho = strlen(palavra);
    
    j = tamanho -1;
    for(i = 0; i < tamanho; i++){
        if(palavra[i] != copia[j]){
            printf("Nao é palindromo");
            return 0;
        }
      j--;
    }
    
    printf("é palindromo!\n\n");
    printf("Tamanho: %d\nPalavra/Frase digitada: %s", tamanho, palavra);
    
    return 0;
}
