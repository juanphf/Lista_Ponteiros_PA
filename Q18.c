// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int comparar(const void *a, const void *b){
//   float fa = *(float *)a;
//   float fb = *(float *)b;
  
//   if (fa < fb){
//     return -1;
//   } else if (fb < fa){
//     return 1;
//   } else{
//     return 0;
//   }
// }

// int main() {
//   int n;
//   float *valores;
//   clock_t t;


//   // Leitura da quantidade de valores
//   printf("Digite a quantidade de valores: ");
//   scanf("%d", &n);

//   // Aloca memória para o array de floats
//   valores = (float *)malloc(n * sizeof(float));
//   if (valores == NULL) {
//     printf("Erro ao alocar memória.\n");
//     exit(1);
//   }

//   // Leitura dos valores
//   printf("Digite os valores: ");
//   for (int i = 0; i < n; i++) {
//     scanf("%f", &valores[i]);
//   }

//   // Ordenação dos valores usando qsort
// //   qsort(valores, n, sizeof(float), comparar);

//   printf("Calculating...\n");
//   t = clock();
//   for (int i = 0; i < 500000; i++) {
//     qsort(valores, n, sizeof(float), comparar);
//   }
//   t = clock() - t;
//   printf("qsort: %d clicks (%f seconds).\n", (int)t,
//          ((float)t) / CLOCKS_PER_SEC);

//   // Apresentação dos valores ordenados
//   printf("Valores ordenados em ordem crescente:\n");
//   for (int i = 0; i < n; i++) {
//     printf("%.2f ", valores[i]);
//   }
//   printf("\n");

//   // Liberação da memória alocada
//   free(valores);
//   valores = NULL;

//   return 0;
// }

// Tempo da questao 16:

// Entrada: 2, 1, 3

// Calculating...
// qsort: 32 clicks (0.032000 seconds).
// Valores ordenados em ordem crescente:
// 1.00 2.00 3.00






// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int comparar(const void *a, const void *b){
//     int ia = *(int *)a; // *(int *)a pega o valor float que o ponteiro a está apontando.
//     int ib = *(int *)b; // *(int *)b pega o valor float que o ponteiro b está apontando.
    
//     if (ia < ib){
//        return -1;
//     } else if (ib < ia){
//         return 1;
//     } else{
//         return 0;
//     }
    
// }


// void ordenar(void *array, int n, size_t valor, int (*comparar_int)(const void *, const void *)){
//     qsort(array, n, valor, comparar_int);
// }



// int main() {
//   int n;
//   int *valores;
//   clock_t t;

//   // Leitura da quantidade de valores
//   printf("Digite a quantidade de valores: ");
//   scanf("%d", &n);

//   // Aloca memória para o vetor de int
//   valores = (int *)malloc(n * sizeof(int));
//   if (valores == NULL) {
//         printf("Erro ao alocar memória.\n");
//         exit(1);
//     }


//   // Leitura dos valores
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &valores[i]);
//   }

//   // Ordenação dos valores usando qsort
// //   ordenar(valores, n, sizeof(int), comparar);
//   printf("Calculating...\n");
//   t = clock();
//   for (int i = 0; i < 500000; i++) {
//     ordenar(valores, n, sizeof(int), comparar);
//   }
//   t = clock() - t;
//   printf("ordenar: %d clicks (%f seconds).\n", (int)t,
//          ((float)t) / CLOCKS_PER_SEC);

//   // Apresentação dos valores ordenados
//   printf("Valores ordenados em ordem crescente:\n");
//   for (int i = 0; i < n; i++) {
//     printf("%d ", valores[i]);
//   }
//   printf("\n");

//   // Liberação da memória alocada
//   free(valores);
//   valores = NULL;

//   return 0;
// }


// Tempo da questao 17:

// Entrada: 2, 1, 3 

// Calculating...
// ordenar: 18 clicks (0.018000 seconds).
// Valores ordenados em ordem crescente:
// 1 2 3

// A segunda implementação foi mais rápida por trabalhar com números inteiros