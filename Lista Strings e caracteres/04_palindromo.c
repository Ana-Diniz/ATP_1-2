#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Função que verifica se a string é um palíndromo
int verificarPalindromo(const char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    // Percorre a string de ambas as extremidades
    while (i < j) {
        // Ignora espaços e pontuação do lado esquerdo
        while (i < j && !isalnum(str[i])) {
            i++;
        }
        // Ignora espaços e pontuação do lado direito
        while (i < j && !isalnum(str[j])) {
            j--;
        }
        // Compara os caracteres, ignorando maiúsculas e minúsculas
        if (tolower(str[i]) != tolower(str[j])) {
            return 0;  // Não é um palíndromo
        }
        i++;
        j--;
    }
    return 1;  // É um palíndromo
}
int main() {
    char str[200];
    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
    str[strcspn(str, "\n")] = 0;
    // Verifica se a string é um palíndromo
    if (verificarPalindromo(str)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
    return 0;
}