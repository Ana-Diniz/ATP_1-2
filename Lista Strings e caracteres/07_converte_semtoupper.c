#include <stdio.h>
#include <string.h>
// Função para converter uma string para maiúsculas
void converterParaMaiusculas(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Verifica se o caractere é uma letra minúscula
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Converte para maiúscula subtraindo a diferença no código ASCII
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
int main() {
    char str[100];
    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
    str[strcspn(str, "\n")] = '\0';
    // Converte a string para maiúsculas
    converterParaMaiusculas(str);
    // Exibe a string em maiúsculas
    printf("String em maiúsculas: %s\n", str);
    return 0;
}