#include <stdio.h>
#include <string.h>
// Função para remover todos os espaços em branco de uma string
void removerEspacos(char* str) {
    int j = 0;  // Índice para a string sem espaços
    for (int i = 0; str[i] != '\0'; i++) {
        // Se o caractere não é um espaço, copiamos para a posição j
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Null-termina a string resultante
}
int main() {
    char str[100];
    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
    str[strcspn(str, "\n")] = '\0';
    // Remove os espaços da string
    removerEspacos(str);
    // Exibe a string sem espaços
    printf("String sem espaços: %s\n", str);
    return 0;
}