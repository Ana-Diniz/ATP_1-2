#include <stdio.h>
void concatenarArquivos(const char* arquivo1, const char* arquivo2, const char* arquivoDestino) {
    FILE *arq1, *arq2, *destino;
    char c;
    // Abre o primeiro arquivo para leitura
    arq1 = fopen(arquivo1, "r");
    if (arq1 == NULL) {
        printf("Erro ao abrir o arquivo %s!\n", arquivo1);
        return;
    }
    // Abre o segundo arquivo para leitura
    arq2 = fopen(arquivo2, "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo %s!\n", arquivo2);
        fclose(arq1);
        return;
    }
    // Abre o arquivo de destino para escrita (cria ou sobrescreve)
    destino = fopen(arquivoDestino, "w");
    if (destino == NULL) {
        printf("Erro ao criar o arquivo de destino %s!\n", arquivoDestino);
        fclose(arq1);
        fclose(arq2);
        return;
    }
    // Copia o conteúdo do primeiro arquivo para o destino
    while ((c = fgetc(arq1)) != EOF) {
        fputc(c, destino);
    }
    // Copia o conteúdo do segundo arquivo para o destino
    while ((c = fgetc(arq2)) != EOF) {
        fputc(c, destino);
    }
    // Fecha todos os arquivos
    fclose(arq1);
    fclose(arq2);
    fclose(destino);
    printf("Arquivos concatenados com sucesso em %s!\n", arquivoDestino);
}
int main() {
    char arquivo1[100], arquivo2[100], arquivoDestino[100];
    // Solicita os nomes dos arquivos ao usuário
    printf("Digite o nome do primeiro arquivo: ");
    if (scanf("%s", arquivo1) != 1) {
        printf("Erro ao ler o nome do primeiro arquivo!\n");
        return 1;
    }
    printf("Digite o nome do segundo arquivo: ");
    if (scanf("%s", arquivo2) != 1) {
        printf("Erro ao ler o nome do segundo arquivo!\n");
        return 1;
    }
    printf("Digite o nome do arquivo de destino: ");
    if (scanf("%s", arquivoDestino) != 1) {
        printf("Erro ao ler o nome do arquivo de destino!\n");
        return 1;
    }
    // Chama a função para concatenar os arquivos
    concatenarArquivos(arquivo1, arquivo2, arquivoDestino);
    return 0;
}