#include <stdio.h>
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}
int mdcArray(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    // Calcula o MDC dos dois primeiros números e continua com os próximos
    int resultado = mdc(arr[0], arr[1]);
    for (int i = 2; i < n; i++) {
        resultado = mdc(resultado, arr[i]);
    }
    return resultado;
}
int main() {
    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Você deve fornecer pelo menos dois números.\n");
        return 1;
    }
    int numeros[n];
    printf("Digite os %d números inteiros positivos: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] <= 0) {
            printf("Todos os números devem ser inteiros positivos.\n");
            return 1;
        }
    }
    int resultado = mdcArray(numeros, n);
    printf("O MDC dos números fornecidos é: %d\n", resultado);
    return 0;
}