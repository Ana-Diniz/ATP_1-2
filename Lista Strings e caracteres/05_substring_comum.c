#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Função para encontrar a maior substring comum entre duas strings
char* maiorSubstringComum(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxLen = 0;
    int endIndex = 0;
    // Criação de uma tabela de programação dinâmica
    int** tabela = (int**)malloc((len1 + 1) * sizeof(int*));
    for (int i = 0; i <= len1; i++) {
        tabela[i] = (int*)malloc((len2 + 1) * sizeof(int));
        memset(tabela[i], 0, (len2 + 1) * sizeof(int));
    }
    // Preenchendo a tabela
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                tabela[i][j] = tabela[i - 1][j - 1] + 1;
                if (tabela[i][j] > maxLen) {
                    maxLen = tabela[i][j];
                    endIndex = i - 1;
                }
            } else {
                tabela[i][j] = 0;
            }
        }
    }
    // Alocando memória para a substring resultante
    char* resultado = (char*)malloc((maxLen + 1) * sizeof(char));
    if (maxLen > 0) {
        strncpy(resultado, s1 + endIndex - maxLen + 1, maxLen);
        resultado[maxLen] = '\0';  // Null-terminando a string
    } else {
        resultado[0] = '\0';  // Caso não haja substring comum
    }
    // Liberando a memória da tabela
    for (int i = 0; i <= len1; i++) {
        free(tabela[i]);
    }
    free(tabela);
    return resultado;
}
int main() {
    char s1[100], s2[100];
    // Solicita ao usuário que insira duas strings
    printf("Digite a primeira string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';  // Remove o caractere de nova linha
    printf("Digite a segunda string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';  // Remove o caractere de nova linha
    // Encontra a maior substring comum
    char* resultado = maiorSubstringComum(s1, s2);
    // Exibe o resultado
    if (strlen(resultado) > 0) {
        printf("A maior substring comum é: %s\n", resultado);
    } else {
        printf("Não há substring comum.\n");
    }
    // Liberando a memória alocada para o resultado
    free(resultado);
    return 0;
}