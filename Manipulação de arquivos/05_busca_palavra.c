#include <stdio.h>
#include <string.h>
#define MAX_LINHA 256
void buscarPalavraEmArquivo(const char* nomeArquivo, const char* palavra) {
    FILE *arquivo;
    char linha[MAX_LINHA];
    int numeroLinha = 1;
    int encontrou = 0;
    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    // Lê o arquivo linha por linha
    while (fgets(linha, sizeof(linha), arquivo)) {
        // Verifica se a palavra está na linha
        if (strstr(linha, palavra) != NULL) {
            printf("Linha %d: %s", numeroLinha, linha);
            encontrou = 1;
        }
        numeroLinha++;
    }
    // Se a palavra não foi encontrada, exibe uma mensagem
    if (!encontrou) {
        printf("A palavra '%s' não foi encontrada no arquivo '%s'.\n", palavra, nomeArquivo);
    }
    // Fecha o arquivo
    fclose(arquivo);
}
int main() {
    char nomeArquivo[100], palavra[100];
    // Solicita o nome do arquivo e a palavra a ser buscada
    printf("Digite o nome do arquivo: ");
    if (scanf("%s", nomeArquivo) != 1) {
        printf("Erro ao ler o nome do arquivo!\n");
        return 1;
    }
    printf("Digite a palavra a ser buscada: ");
    if (scanf("%s", palavra) != 1) {
        printf("Erro ao ler a palavra!\n");
        return 1;
    }
    // Chama a função para buscar a palavra no arquivo
    buscarPalavraEmArquivo(nomeArquivo, palavra);
    return 0;
}