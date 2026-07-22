#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MIN_MATRICULA 1
#define MAX_MATRICULA 10

typedef struct Funcionario {
    int numeroMatricula;
    char nome[MAX_NOME];
    struct Funcionario* prox;
} Funcionario;

Funcionario* listaRFunc = NULL;

void InserirFuncionarioOrdenado() {
    Funcionario* novo = (Funcionario*)malloc(sizeof(Funcionario));
    Funcionario* atual;
    Funcionario* anterior = NULL;
    int resultado;
    
    printf("Digite o número da matrícula (%d-%d): ", MIN_MATRICULA, MAX_MATRICULA);
    resultado = scanf("%d", &novo->numeroMatricula);
    if (resultado != 1) {
        printf("Erro na leitura.\n");
        free(novo);
        while (getchar() != '\n');
        return;
    }
    if (novo->numeroMatricula < MIN_MATRICULA || novo->numeroMatricula > MAX_MATRICULA) {
        printf("Número de matrícula inválido.\n");
        free(novo);
        return;
    }
    
    printf("Digite o nome do funcionário: ");
    getchar();
    fgets(novo->nome, MAX_NOME, stdin);
    novo->nome[strcspn(novo->nome, "\n")] = '\0';
    novo->prox = NULL;
    
    if (listaRFunc == NULL) {
        listaRFunc = novo;
    } else {
        atual = listaRFunc;
        while (atual != NULL && atual->numeroMatricula < novo->numeroMatricula) {
            anterior = atual;
            atual = atual->prox;
        }
        if (anterior == NULL) {
            novo->prox = listaRFunc;
            listaRFunc = novo;
        } else {
            anterior->prox = novo;
            novo->prox = atual;
        }
    }
}

void ExcluirFuncionario(int matricula) {
    Funcionario* atual = listaRFunc;
    Funcionario* anterior = NULL;
    while (atual != NULL && atual->numeroMatricula != matricula) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL) {
        if (anterior == NULL) listaRFunc = atual->prox;
        else anterior->prox = atual->prox;
        free(atual);
    } else {
        printf("Funcionário com matrícula %d não encontrado.\n", matricula);
    }
}

void MostrarFuncionarios() {
    Funcionario* atual = listaRFunc;
    while (atual != NULL) {
        printf("Número de Matrícula: %d\n", atual->numeroMatricula);
        printf("Nome: %s\n", atual->nome);
        printf("-------------------------\n");
        atual = atual->prox;
    }
}

int main() {
    int opcao, matricula;
    while (1) {
        printf("1. Inserir Funcionário\n");
        printf("2. Mostrar Funcionários\n");
        printf("3. Excluir Funcionário\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            continue;
        }
        switch (opcao) {
            case 1: InserirFuncionarioOrdenado(); break;
            case 2: MostrarFuncionarios(); break;
            case 3:
                printf("Digite a matrícula a ser excluída: ");
                scanf("%d", &matricula);
                ExcluirFuncionario(matricula);
                break;
            case 4:
                while (listaRFunc != NULL) ExcluirFuncionario(listaRFunc->numeroMatricula);
                return 0;
        }
    }
}