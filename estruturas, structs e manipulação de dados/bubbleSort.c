#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int x[], int n) {
  int aux;
  int passo;
  bool troca= true;
    for (passo=1; passo<n && troca; passo++) {
        troca= false;
        for (int i=0; i<n-passo; i++) {
        if (x[i] > x[i+1]) {
            aux= x[i];
            x[i]= x[i+1];
            x[i+1]= aux;
            troca= true;
        }
        }
    }
    printf("BubbleSort completo\n");
    printf("Numero de comparacoes: %d\n", passo);
    printf("Vetor ordenado: ");
    for (int i=0; i<n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int main() {
  int x[10]= {5, 3, 2, 7, 6, 8, 1, 0, 4, 9};
  int vetor_inversamente_ordenado[10]= {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int vetores_iguais[10]= {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int vetor_negativo[10]= {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
  
  BubbleSort(vetor_negativo, 10);
  for (int i=0; i<10; i++) cout << vetor_negativo[i] << " ";
  cout << endl;
  
  BubbleSort(x, 10);
  for (int i=0; i<10; i++) cout << x[i] << " ";
  cout << endl;
  
  BubbleSort(vetor_inversamente_ordenado, 10);
  for (int i=0; i<10; i++) cout << vetor_inversamente_ordenado[i] << " ";
  cout << endl;
  
  BubbleSort(vetores_iguais, 10);
  for (int i=0; i<10; i++) cout << vetores_iguais[i] << " ";
  cout << endl;

  return 0;
}