#include <stdio.h>
#include <string.h>
int main() {
    char str[100];  // Definimos um tamanho máximo de 100 caracteres para a string
    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    
    // Verifica se fgets leu a string corretamente
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
        str[strcspn(str, "\n")] = 0;
        // Calcula o comprimento da string
        int len = strlen(str);
        // Imprime a string de trás para frente
        printf("String invertida: ");
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    } else {
        // Caso fgets falhe, exibe uma mensagem de erro
        printf("Erro ao ler a string.\n");
    }
    return 0;
}