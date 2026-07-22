#include <stdio.h>
#include <stdlib.h>

void preencherReg(char nome[100], int *num_mat) {
	printf("Digite o nome do funcionario: ");
	scanf("%99s", nome);
	printf("Digite o numero de matricula do funcionario: ");
	scanf("%d", num_mat);
}

struct regFun {
	char nome[100];
	int num_mat;
};

int main() {
	int n;
	printf("Quantos funcionarios deseja registrar? ");
	scanf("%d", &n);
	struct regFun *ListaRfun = (struct regFun *)malloc(n * sizeof(struct regFun));
	if (ListaRfun == NULL) {
    	fprintf(stderr, "Erro ao alocar memória\n");
    	return 1;
	}
	for (int i = 0; i < n; i++) {
    	preencherReg(ListaRfun[i].nome, &ListaRfun[i].num_mat);
	}
	free(ListaRfun);
	return 0;
}


