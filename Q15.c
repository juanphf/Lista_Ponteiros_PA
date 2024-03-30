#include <stdio.h>
#include <stdlib.h>

// Função para trocar os valores de duas variáveis
void trocar(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void ordenar(float *valores, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                trocar(&valores[j], &valores[j + 1]);
            }
        }
    }
}

// Função para receber os valores e apresentá-los em ordem crescente
void ordenarValores(float *valores, int n) {
    printf("Digite %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Ordena os valores usando a função criada
    ordenar(valores, n);

    // Apresenta os valores ordenados
    printf("Valores ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &n);

    // Aloca memória dinamicamente para armazenar os valores
    float *valores = (float *)malloc(n * sizeof(float));
    if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    // Chama a função para ler e ordenar os valores
    ordenarValores(valores, n);

    // Libera a memória alocada
    free(valores);
    valores = NULL;
    
    return 0;
}