// Ele armazena o endereço de memória de uma função em vez de armazenar o endereço de uma variável.

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){  // Definindo a função soma
    return (printf("A soma de n1 com n2: %d ", x + y));
}

int main(){
    
    int n1, n2;
    int (*ptrSoma)(int, int) = soma; // Ponteiro de função que aponta para a função soma
    
    scanf(" %d %d", &n1, &n2); // Definindo os parâmetros da função
    
    (*ptrSoma)(n1,n2); // Passando os parâmetros para função

    
    return 0;
}

