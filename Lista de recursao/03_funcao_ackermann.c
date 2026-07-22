#include <stdio.h>
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1; // Para lidar com casos inesperados
}
int main() {
    int m, n;
    printf("Digite valores para m e n (não negativos): ");
    if (scanf("%d", &m) != 1 || scanf("%d", &n) != 1) {
        fprintf(stderr, "Erro ao ler os valores.\n");
        return 1;
    }
    if (m < 0 || n < 0) {
        printf("Os valores devem ser não negativos.\n");
        return 1;
    }
    int resultado = ackermann(m, n);
    printf("A(%d, %d) = %d\n", m, n, resultado);
    return 0;
}