#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOME_MAX 100
// Estrutura para armazenar informações do aluno
typedef struct {
    char nome[NOME_MAX];
    int idade;
    float nota;
} Aluno;
// Função para adicionar um aluno ao arquivo
void adicionarAluno(const char *nomeArquivo) {
    FILE *arquivo;
    Aluno aluno;
    // Abre o arquivo em modo de anexação binária
    arquivo = fopen(nomeArquivo, "ab");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    // Solicita informações do aluno
    printf("Digite o nome do aluno: ");
    if (fgets(aluno.nome, sizeof(aluno.nome), stdin) == NULL) {
        perror("Erro ao ler o nome do aluno");
        fclose(arquivo);
        return;
    }
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';  // Remove a nova linha
    printf("Digite a idade do aluno: ");
    if (scanf("%d", &aluno.idade) != 1) {
        printf("Erro ao ler a idade do aluno!\n");
        fclose(arquivo);
        return;
    }
    printf("Digite a nota do aluno: ");
    if (scanf("%f", &aluno.nota) != 1) {
        printf("Erro ao ler a nota do aluno!\n");
        fclose(arquivo);
        return;
    }
    // Limpa o buffer de entrada
    while (getchar() != '\n');
    // Grava os dados no arquivo
    if (fwrite(&aluno, sizeof(Aluno), 1, arquivo) != 1) {
        perror("Erro ao escrever os dados no arquivo");
    }
    // Fecha o arquivo
    fclose(arquivo);
    printf("Aluno adicionado com sucesso!\n");
}
// Função para listar todos os alunos no arquivo
void listarAlunos(const char *nomeArquivo) {
    FILE *arquivo;
    Aluno aluno;
    // Abre o arquivo em modo de leitura binária
    arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    // Lê e exibe os dados de cada aluno
    while (fread(&aluno, sizeof(Aluno), 1, arquivo) == 1) {
        printf("Nome: %s\n", aluno.nome);
        printf("Idade: %d\n", aluno.idade);
        printf("Nota: %.2f\n", aluno.nota);
        printf("------------------------------\n");
    }
    // Fecha o arquivo
    fclose(arquivo);
}
// Função para buscar um aluno pelo nome
void buscarAluno(const char *nomeArquivo, const char *nomeBusca) {
    FILE *arquivo;
    Aluno aluno;
    int encontrado = 0;
    // Abre o arquivo em modo de leitura binária
    arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    // Lê os dados de cada aluno e verifica se o nome corresponde
    while (fread(&aluno, sizeof(Aluno), 1, arquivo) == 1) {
        if (strcmp(aluno.nome, nomeBusca) == 0) {
            printf("Aluno encontrado!\n");
            printf("Nome: %s\n", aluno.nome);
            printf("Idade: %d\n", aluno.idade);
            printf("Nota: %.2f\n", aluno.nota);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Aluno com o nome '%s' não encontrado.\n", nomeBusca);
    }
    // Fecha o arquivo
    fclose(arquivo);
}
int main() {
    const char *nomeArquivo = "alunos.dat";
    int opcao;
    char nomeBusca[NOME_MAX];
    do {
        printf("Menu:\n");
        printf("1. Adicionar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Erro ao ler a opção!\n");
            // Limpa o buffer de entrada
            while (getchar() != '\n');
            continue;
        }
        // Limpa o buffer de entrada
        while (getchar() != '\n');
        switch (opcao) {
            case 1:
                adicionarAluno(nomeArquivo);
                break;
            case 2:
                listarAlunos(nomeArquivo);
                break;
            case 3:
                printf("Digite o nome do aluno a ser buscado: ");
                if (fgets(nomeBusca, sizeof(nomeBusca), stdin) == NULL) {
                    perror("Erro ao ler o nome do aluno");
                    break;
                }
                nomeBusca[strcspn(nomeBusca, "\n")] = '\0';  // Remove a nova linha
                buscarAluno(nomeArquivo, nomeBusca);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);
    return 0;
}