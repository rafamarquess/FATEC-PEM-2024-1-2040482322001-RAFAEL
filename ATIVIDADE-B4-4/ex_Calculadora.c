#include <stdio.h>
#include <string.h>

 float result, op1, op2;
 int operacao;
 
 void adicao(){
     result = op1+op2;
 }

 void subtracao(){
     result = op1-op2;
 }

 void multiplicacao(){
     result = op1*op2;
 }

 void divisao(){
     result = op1/op2;
 }

int main(){
    char continuar;
 do{
    printf("PRIMEIRO NUMERO DA OPERAÇAO -> ");
    scanf("%f", &op1);
    printf("SEGUNDO NUMERO DA OPERAÇAO  -> ");
    scanf("%f", &op2);
    
    printf("\n1| Adiçao\n");
    printf("2| Subtração\n");
    printf("3| Multiplicação\n");
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
        while (op2 == 0){
            printf("\nNÃO É POSSIVEL DIVIDIR POR 0!\n");
            printf("Escolha outro numero: ");
            scanf("%f", &op2);
        }
        
        divisao();
        printf("\nResultado da Divisão: %.2f", result);
    }
    
    printf("\n\nPressione 'S' para sair ou qualquer outra tecla para continuar: ");
    scanf(" %c", &continuar);
 } 
    while (continuar != 'S' && continuar != 's');
 
    return 0;
}