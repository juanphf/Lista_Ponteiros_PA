#include <stdio.h>
#include <stdlib.h>


void somar_vetores(int *vet1, int *vet2, int *res, int n){
    for (int i = 0; i < n; i++){
        res[i] = vet1[i] + vet2[i];  // Somando valores de mesmo indice
    }
    
}

int main(){
    int n;
    int *vet1, *vet2, *res;
    
    // Leitura da quantidade de valores
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    // Alocando memória para os vetores
    vet1 = (int *)malloc(n * sizeof(int));
    vet2 = (int *)malloc(n * sizeof(int));
    res = (int *)malloc(n*sizeof(int));

    // Leitura dos elementos do vetor 1
    printf("Digite os elementos do vetor 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet1[i]);
    }

    // Leitura dos elementos do vetor 2
    printf("Digite os elementos do vetor 2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet2[i]);
    }

    // Chamando a função de soma
    somar_vetores(vet1, vet2, res, n);

    for (int i = 0; i < n; i++){
        printf("%d ", res[i]);
    }
     
    // Liberando memória dos vetores
    free(vet1);
    free(vet2);
    free(res);
    vet1 = NULL;
    vet2 = NULL;
    res = NULL;

    return 0;
}