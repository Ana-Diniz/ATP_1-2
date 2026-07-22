#include <stdio.h>
#include <string.h>
int main() {
    FILE *arquivo;
    char nome[100];
    // Abre o arquivo "nomes.txt" para escrita (cria ou sobrescreve o arquivo)
    arquivo = fopen("nomes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    // Solicita ao usuário que insira 5 nomes
    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nome, sizeof(nome), stdin);
        
        // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
        nome[strcspn(nome, "\n")] = '\0';
        // Escreve o nome no arquivo
        fprintf(arquivo, "%s\n", nome);
    }
    // Fecha o arquivo após a escrita
    fclose(arquivo);
    printf("Os nomes foram salvos no arquivo 'nomes.txt'.\n");
    return 0;
}