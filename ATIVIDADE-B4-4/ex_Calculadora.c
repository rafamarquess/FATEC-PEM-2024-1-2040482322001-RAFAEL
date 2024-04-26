#include <stdio.h>
#include <string.h>

#define NUM 2

 float result, op[NUM];
 int operacao;
 
 void adicao(){
     result = op[0]+op[1];
 }

 void subtracao(){
     result = op[0]-op[1];
 }

 void multiplicacao(){
     result = op[0]*op[1];
 }

 void divisao(){
     result = op[0]/op[1];
 }

int main(){
    char continuar;
 do{
    printf("PRIMEIRO NUMERO DA OPERAÇAO -> ");
    scanf("%f", &op[0]);
    printf("SEGUNDO NUMERO DA OPERAÇAO  -> ");
    scanf("%f", &op[1]);
    
    printf("\n1| Adiçao\n");
    printf("2| Subtraçao\n");
    printf("3| Multiplicaçao\n");
    printf("4| Divisão\n");
    printf("Digite o numero correspondente a operação desejada: ");
    scanf("%i", &operacao);
    
    if (operacao == 1){
        adicao();
        printf("\nResultado da Soma: %.2f", result);
    }
    if (operacao == 2){
        subtracao();
        printf("\nResultado da Subtracao: %.2f", result);
    }
    if (operacao == 3){
        multiplicacao();
        printf("\nResultado da Multiplicação: %.2f", result);
    }
    if (operacao == 4){
        while (op[1] == 0){
            printf("\nNÃO É POSSIVEL DIVIDIR POR 0!\n");
            printf("Escolha outro numero: ");
            scanf("%f", &op[1]);
        }
        
        divisao();
        printf("\nResultado da Divisão: %.2f", result);
    }
    
    printf("\n\nPressione 'S' para SAIR ou qualquer outra tecla para CONTINUAR: ");
    scanf(" %c", &continuar);
 } 
    while (continuar != 'S' && continuar != 's');
 
    return 0;
}