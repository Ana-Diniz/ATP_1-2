#include <stdio.h>
void torresDeHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        // Caso base: mover um único disco
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    // Mover n-1 discos da origem para o auxiliar, usando o destino como auxiliar
    torresDeHanoi(n - 1, origem, auxiliar, destino);
    // Mover o disco restante da origem para o destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    // Mover os n-1 discos do auxiliar para o destino, usando a origem como auxiliar
    torresDeHanoi(n - 1, auxiliar, destino, origem);
}
int main() {
    int n;
    // Lê o número de discos
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    // Chama a função para resolver o problema das Torres de Hanói
    torresDeHanoi(n, 'A', 'C', 'B');
    return 0;
}