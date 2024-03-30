#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
    int ia = *(int *)a; // *(int *)a pega o valor float que o ponteiro a está apontando.
    int ib = *(int *)b; // *(int *)b pega o valor float que o ponteiro b está apontando.
    
    if (ia < ib){
       return -1;
    } else if (ib < ia){
        return 1;
    } else{
        return 0;
    }
    
}


void ordenar(void *array, int n, size_t valor, int (*comparar_int)(const void *, const void *)){
    qsort(array, n, valor, comparar_int);
}



int main() {
  int n;
  int *valores;

  // Leitura da quantidade de valores
  printf("Digite a quantidade de valores: ");
  scanf("%d", &n);

  // Aloca memória para o vetor de int
  valores = (int *)malloc(n * sizeof(int));
  if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }


  // Leitura dos valores
  for (int i = 0; i < n; i++) {
    scanf("%d", &valores[i]);
  }

  // Ordenação dos valores usando qsort
  ordenar(valores, n, sizeof(int), comparar);

  // Apresentação dos valores ordenados
  printf("Valores ordenados em ordem crescente:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", valores[i]);
  }
  printf("\n");

  // Liberação da memória alocada
  free(valores);
  valores = NULL;

  return 0;
}