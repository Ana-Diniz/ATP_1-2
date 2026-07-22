#include <stdio.h>
// Função auxiliar recursiva para verificar se um número é primo
int verificaPrimo(int n, int divisor) {
    if (divisor == 1) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }
    return verificaPrimo(n, divisor - 1);
}
int primo(int n) {
    if (n <= 1) {
        // Números menores ou iguais a 1 não são primos
        return 0;
    }
    return verificaPrimo(n, n - 1);
}
int main () {
	int numero;
	printf("informe o numero a ser verificado: ");
	scanf("%d", &numero);
	if (primo(numero)) {
		printf("o numero %d eh primo", numero);
	} else {
		printf("o numero %d nao eh primo", numero);
	}
	return 0;
}