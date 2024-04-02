#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
    float fa = *(float *)a; // *(float *)a pega o valor float que o ponteiro a está apontando.
    float fb = *(float *)b; // *(float *)b pega o valor float que o ponteiro b está apontando.
    
    if (fa < fb){
       return -1;
    } else if (fb < fa){
        return 1;
    } else{
        return 0;
    }
    
    
}

int main() {
  int n;
  float *valores;

  // Leitura da quantidade de valores
  printf("Digite a quantidade de valores: ");
  scanf("%d", &n);

  // Aloca memória para o array de floats
  valores = (float *)malloc(n * sizeof(float));
  if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }


  // Leitura dos valores
  for (int i = 0; i < n; i++) {
    scanf("%f", &valores[i]);
  }

  // Ordenação dos valores usando qsort
  qsort(valores, n, sizeof(float), comparar);

  // Apresentação dos valores ordenados
  printf("Valores ordenados em ordem crescente:\n");
  for (int i = 0; i < n; i++) {
    printf("%.2f ", valores[i]);
  }
  printf("\n");

  // Liberação da memória alocada
  free(valores);
  valores = NULL;

  return 0;
}