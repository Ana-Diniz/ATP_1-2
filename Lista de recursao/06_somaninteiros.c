#include <stdio.h>
int soma (int n) {
	if (n == 0) {
		return 0;
	}
	
	return n + soma(n-1);;
}
int main () {
	int numero;
	printf("informe ate qual numero vai a soma: ");
	scanf("%d", &numero);
	int soma_inteiros = soma(numero);
	printf("a soma dos inteiros ate %d eh: %d", numero, soma_inteiros);
}