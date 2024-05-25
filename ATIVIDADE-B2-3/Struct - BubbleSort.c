//Rafael Marques Alves - ADS Tarde - FATEC IPIRANGA - 2° Semestre

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    float nota;
} Aluno;

Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;

void incluirAluno() {
    printf("\nDigite a quantidade de alunos: ");
    scanf("%i", &totalAlunos);
  
    for (int i = 0; i < totalAlunos; i++){
        printf("\nDigite o NOME do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a NOTA do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
        printf("\n");

      if(alunos[i].nota > 10 | alunos[i].nota < 0){
        printf("Nota inválida, digite novamente: ");
        scanf("%f", &alunos[i].nota);
      }
  }
  printf("Alunos inseridos com sucesso!\n\n");
}

void bubbleSort() {
    int i, j;
    Aluno temp;
  
    for (i = 0; i < totalAlunos - 1; i++) {
      for (j = 0; j < totalAlunos - i - 1; j++) {
        if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
          temp = alunos[j];
          alunos[j] = alunos[j + 1];
          alunos[j + 1] = temp;
        }
      }
    }
}

void listarAluno(){
  
   if (totalAlunos == 0) {
          printf("\nNenhum aluno cadastrado.\n\n");
          return;
      }

      bubbleSort(); 

      printf("\nLista de alunos ordenados por nome:\n\n");
      for (int i = 0; i < totalAlunos; i++) {
      int situacao;
        
      printf("Nome: %s\nNota: %.2f\n", alunos[i].nome, alunos[i].nota);
        if (alunos[i].nota >= 6){
          printf("Aprovado!\n\n");
        }
        else{
          printf("Reprovado!\n\n");
        }
      printf("\n");
      }
}

int main() {
  int opcao;
do {
      printf("========MENU========\n");
      printf("|[1] Incluir Aluno |\n");
      printf("|[2] Listar Aluno  |\n");
      printf("|[3] Sair          |\n");
      printf("====================\n");
      printf("\nDigite a opção desejada: ");
      scanf("%d", &opcao);

      switch(opcao) {
          case 1:
              incluirAluno();
              break;
          case 2:
              listarAluno();
              break;
          case 3:
              printf("\nSaindo...\n");
              break;
          default:
              printf("\nDigite uma opção válida!\n\n");
              break;
      }
  } while(opcao != 3);

  return 0;
}