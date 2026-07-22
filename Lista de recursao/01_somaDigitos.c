#include <stdio.h>
// Soma de Dígitos: Uma função recursiva que calcule a soma dos dígitos de um número inteiro positivo.
int soma (int n){
  if (n == 0){
    return 0;
  }
 
  return (n % 10) + soma(n / 10);
}
int main(){
  int n;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);
  printf("A soma dos dígitos de %d é %d", n, soma(n));
  return 0;
}