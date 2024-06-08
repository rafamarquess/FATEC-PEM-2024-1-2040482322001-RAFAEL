//Fatec Ipiranga - ADS TARDE
//Aluno: Rafael Marques Alves

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct Produto {
    int id;
    char nome[50];
    char descricao[100];
    float preco;
    int quantidade;
} Produto;

Produto produtos[MAX_PRODUTOS];
int totalProdutos = 0;

void inserirProduto() {
    printf("\nDigite a quantidade de produtos: ");
    scanf("%i", &totalProdutos);

    for (int i = 0; i < totalProdutos; i++) {
        printf("\nNome do produto: "); 
        scanf("%s", produtos[i].nome);
        printf("Descrição do produto: ");
        scanf("%s", produtos[i].descricao);
        printf("Preço Unitário do produto: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade disponível em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        produtos[i].id = 1000 + i;
        printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
    } 
    printf("\nProdutos inseridos com sucesso!\n\n");
}

void bubbleSort() {
    for (int i = 0; i < totalProdutos - 1; i++) {
        for (int j = 0; j < totalProdutos - i - 1; j++) {
            if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
}

void listarProdutos() {
    if (totalProdutos == 0) {
        printf("\nNenhum produto cadastrado.\n\n");
        return;
    }

    bubbleSort();

    for (int i = 0; i < totalProdutos; i++) {
        printf("\nId: %d\n", produtos[i].id);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n\n", produtos[i].quantidade);
    }
}

void comprarProduto() {
    if (totalProdutos == 0) {
        printf("\nNenhum produto disponível para compra.\n\n");
        return;
    }

    int id, quantidade;
    float total = 0;
    char continuar;

    do {
        listarProdutos();
        printf("Digite o ID do produto que deseja comprar: ");
        scanf("%d", &id);

        int produtoEncontrado = -1;
        for (int i = 0; i < totalProdutos; i++) {
            if (produtos[i].id == id) {
                produtoEncontrado = i;
                break;
            }
        }

        if (produtoEncontrado == -1) {
            printf("\nProduto Inexistente!!\n");
            continue;
        }

        Produto *produtoSelecionado = &produtos[produtoEncontrado];
        printf("\nDigite a quantidade de produtos que deseja comprar: ");
        scanf("%d", &quantidade);

        if (quantidade > produtoSelecionado->quantidade) {
            printf("\n*Quantidade indisponível em estoque.*\n\n");
            return;
        }

        produtoSelecionado->quantidade -= quantidade;
        total += produtoSelecionado->preco * quantidade;
        printf("\nProduto %s adicionado ao carrinho. Subtotal: %.2f\n", produtoSelecionado->nome, total);

        printf("\nDeseja comprar outro produto? (s/n): ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    printf("\n\nCompra finalizada. Total a pagar: %.2f\n\n", total);
}

void menu() {
    int opcao;

    do {
        printf("=========MENU==========\n");
        printf("|[1] Inserir produtos |\n");
        printf("|[2] Comprar produtos |\n");
        printf("|[3] Listar produtos  |\n");
        printf("|[4]      Sair        |\n");
        printf("=======================\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirProduto();
                break;
            case 2:
                comprarProduto();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                printf("\nFinalizando Programa...\n");
                break;
            default:
                printf("\nDigite uma opção válida!\n\n");
        }
    } while (opcao != 4);
}

int main() {
    menu();
    return 0;
}
