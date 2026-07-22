#include <stdio.h>
void copiarArquivo(const char* arquivoOrigem, const char* arquivoDestino) {
    FILE *origem, *destino;
    char c;
    // Abre o arquivo de origem para leitura
    origem = fopen(arquivoOrigem, "r");
    if (origem == NULL) {
        printf("Erro ao abrir o arquivo de origem!\n");
        return;
    }
    // Abre o arquivo de destino para escrita (cria ou sobrescreve)
    destino = fopen(arquivoDestino, "w");
    if (destino == NULL) {
        printf("Erro ao abrir o arquivo de destino!\n");
        fclose(origem);  // Fechar o arquivo de origem em caso de erro
        return;
    }
    // Lê caractere por caractere do arquivo de origem e escreve no arquivo de destino
    while ((c = fgetc(origem)) != EOF) {
        fputc(c, destino);
    }
    // Fecha os arquivos
    fclose(origem);
    fclose(destino);
    printf("Arquivo copiado com sucesso!\n");
}
int main() {
    char arquivoOrigem[100], arquivoDestino[100];
    // Solicita ao usuário os nomes dos arquivos e verifica o retorno de scanf
    printf("Digite o nome do arquivo de origem: ");
    if (scanf("%s", arquivoOrigem) != 1) {
        printf("Erro ao ler o nome do arquivo de origem!\n");
        return 1;
    }
    printf("Digite o nome do arquivo de destino: ");
    if (scanf("%s", arquivoDestino) != 1) {
        printf("Erro ao ler o nome do arquivo de destino!\n");
        return 1;
    }
    // Chama a função para copiar o arquivo
    copiarArquivo(arquivoOrigem, arquivoDestino);
    return 0;
}