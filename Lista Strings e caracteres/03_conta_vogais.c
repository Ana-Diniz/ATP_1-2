#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Função que conta o número de vogais em uma string
int contarVogais(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        // Converte o caractere para minúsculo antes de verificar
        char c = tolower(str[i]);
        
        // Verifica se o caractere é uma vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}
int main() {
    char str[100];
    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove o caractere de nova linha (\n) que pode ser lido pelo fgets
    str[strcspn(str, "\n")] = 0;
    // Chama a função para contar vogais
    int numeroVogais = contarVogais(str);
    // Exibe o resultado
    printf("Número de vogais na string: %d\n", numeroVogais);
    return 0;
}