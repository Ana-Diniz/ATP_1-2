#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base: o 0º termo é 0
    } else if (n == 1) {
        return 1; // Caso base: o 1º termo é 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
    }
}
int main() {
    int termo;
    printf("Informe o número do termo da sequência de Fibonacci: ");
    scanf("%d", &termo);
    int valor = fibonacci(termo);
    printf("O %dº termo da sequência de Fibonacci é: %d\n", termo, valor);	
    return 0;
}