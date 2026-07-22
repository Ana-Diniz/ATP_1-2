#include <stdio.h>
int contarLinhas(const char* nomeArquivo) {
    FILE *arquivo;
    char c;
    int contadorLinhas = 0;
    int caractereAnteriorNaoNovaLinha = 0;
    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return -1;
    }
    // Conta o número de quebras de linha no arquivo
    while ((c = fgetc(arquivo)) != EOF) {
        if (c == '\n') {
            contadorLinhas++;
            caractereAnteriorNaoNovaLinha = 0;  // Reinicia quando encontra nova linha
        } else {
            caractereAnteriorNaoNovaLinha = 1;  // Marca que um caractere foi lido
        }
    }
    // Caso o último caractere não seja uma nova linha, conta a última linha
    if (caractereAnteriorNaoNovaLinha) {
        contadorLinhas++;
    }
    // Fecha o arquivo
    fclose(arquivo);
    // Retorna o número de linhas
    return contadorLinhas;
}
int main() {
    const char* nomeArquivo = "nomes.txt";  // Nome do arquivo a ser lido
    int linhas = contarLinhas(nomeArquivo);
    if (linhas != -1) {
        printf("O arquivo '%s' tem %d linha(s).\n", nomeArquivo, linhas);
    }
    return 0;
}