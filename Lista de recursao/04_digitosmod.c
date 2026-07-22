#include <stdio.h>
void escreve_digitos (int n) {
	if (n < 10) {
		printf("%d", n);
	} else {
		escreve_digitos (n/10);
		printf(", %d", n%10);
	}
}
// 145 --> entra no else --> faz a função com o 14 
// 14 --> entra no else --> faz a função com o 1
// 1 --> printa 1 --> printa 4 --> printa 5
// fim da função
int main () {
	int numero;
	printf("informe um numero maior do que 9: ");
	scanf("%d", &numero);
	escreve_digitos(numero);
	printf("\n");
	return 0;
}