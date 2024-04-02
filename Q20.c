#include <stdio.h>
#include <stdlib.h>

int **multiplica_matrizes(int **A, int **B, int **C, int i, int j, int k, int l) {

  // Realizando a multiplicação
  for (int m = 0; m < i; m++) {
    for (int n = 0; n < l; n++) {
      C[m][n] = 0;
      for (int p = 0; p < j; p++) {
        C[m][n] += A[m][p] * B[p][n];
      }
    }
  }

  // Print da matriz A
  printf("\nMatriz A:\n");
  for (int m = 0; m < i; m++) {
    for (int n = 0; n < j; n++) {
      printf(" %d ", A[m][n]);
    }
    printf("\n");
  }

  // Print da matriz B
  printf("\nMatriz B:\n");
  for (int m = 0; m < k; m++) {
    for (int n = 0; n < l; n++) {
      printf(" %d ", B[m][n]);
    }
    printf("\n");
  }

  // Print da matriz resultante
  printf("\nMatriz Resultante:\n");
  for (int m = 0; m < i; m++) {
    for (int n = 0; n < l; n++) {
      printf(" %d ", C[m][n]);
    }
    printf("\n");
  }

  // Retornando a matriz C
  return C;
}

int main() {
  int i, j, k, l;
  int **A, **B, **C;

  // Definindo as dimensões das matrizes
  printf("Defina a quantidade de linhas da matriz A: \n");
  scanf("%d", &i);

  printf("Defina a quantidade de colunas da matriz A: \n");
  scanf("%d", &j);

  printf("Defina a quantidade de linhas da matriz B: \n");
  scanf("%d", &k);

  printf("Defina a quantidade de colunas da matriz B: \n");
  scanf("%d", &l);

  // Verificando se é possível fazer a multiplicação
  if (j != k || i == 0 || j == 0 || k == 0 || l == 0) {
    printf("Não é possível fazer a multiplicação das matrizes\n");
    exit(1);
  }

  // Alocando memória para as matrizes
  A = (int **)malloc(i * sizeof(int *));
  for (int m = 0; m < i; m++) {
    A[m] = (int *)malloc(j * sizeof(int));
  }

  B = (int **)malloc(k * sizeof(int *));
  for (int m = 0; m < k; m++) {
    B[m] = (int *)malloc(l * sizeof(int));
  }

  C = (int **)malloc(i * sizeof(int *));
  for (int m = 0; m < i; m++) {
    C[m] = (int *)malloc(l * sizeof(int));
  }

  // Verificando se a alocação de memória deu certo
  if (A == NULL || B == NULL || C == NULL) {
    printf("Erro na alocação de memória\n");
    exit(1);
  }

  // Inserindo elementos nas matrizes A
  for (int m = 0; m < i; m++) {
    for (int n = 0; n < j; n++) {
      printf("Digite o elemento da linha %d, coluna %d da matriz A: ", m + 1, n + 1);
      scanf("%d", &A[m][n]);
    }
  }

  // Inserindo elementos nas matrizes B
  for (int m = 0; m < k; m++) {
    for (int n = 0; n < l; n++) {
      printf("Digite o elemento da linha %d, coluna %d da matriz B: ", m + 1, n + 1);
      scanf("%d", &B[m][n]);
    }
  }

  // Chamando a função para realizar a multiplicação
  C = multiplica_matrizes(A, B, C, i, j, k, l);


  // Liberando memória
  for (int m = 0; m < i; m++) {
    free(A[m]);
  }
  free(A);
  A = NULL;

  for (int m = 0; m < k; m++) {
    free(B[m]);
  }
  free(B);
  B = NULL;

  for (int m = 0; m < i; m++) {
    free(C[m]);
  }
  free(C);
  C = NULL;
  

  return 0;
}
