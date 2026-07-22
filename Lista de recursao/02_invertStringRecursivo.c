#include <stdio.h>
#include <string.h>
void inverterstr (char *str, int inicio, int fim){
  if (inicio >= fim)
    return;
  char troca = str[inicio];
  str[inicio] = str[fim];
  str[fim] = troca;
  inverterstr(str, inicio + 1, fim - 1);
}
int main(){
  char str[100];
 
  printf("digite uma palavra (para ser invertida)");
  if (fgets(str, sizeof(str), stdin) == NULL) {
    fprintf(stderr, "Erro ao ler a string.\n");
    return 1; // Retorna um código de erro
  }
  // Remove o newline que fgets pode adicionar
  str[strcspn(str, "\n")] = 0;
 
  int tamanho = strlen(str);
  inverterstr(str, 0, tamanho - 1);
  printf("palavra invertida: %s\n", str);
  return 0;
}